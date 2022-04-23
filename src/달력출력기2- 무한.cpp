#include <stdio.h>

int day(int yyyy, int mm);
int day_of_month(int yyyy, int mm);
int lunar(int yyyy);
void cal(int yyyy, int mm ,int start_day, int day_num);

int main(void)
{	while(true) {
	int yyyy, mm; 
	printf("\n년도: ->\n월: ->\n");
	scanf("%d%d", &yyyy, &mm);
    
    int start_day = day(yyyy, mm);
    int day_num = day_of_month(yyyy, mm);
    cal(yyyy,mm,start_day, day_num);
	}
	return 0;
}

int lunar(int yyyy)
{
	if(yyyy % 400 == 0 || (yyyy % 100 != 0) && (yyyy % 4 == 0))
	return 1;
	return 0;
}

int day_of_month(int yyyy,  int mm)
{
    int day_of_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    day_of_month[2] += lunar(yyyy);
    return day_of_month[mm];
}

void cal(int yyyy, int mm, int start_day, int day_num)
{ 
	if(yyyy == 0 || mm == 0 || mm >12) {
		printf("입력이 바르지 않습니다. 다시 하세요.\n");		
	} 
	else {
	
 	printf(" ========= %dY %dM ==========\n\n  Sun Mon Tue Wed Thu Fri Sat\n\n", yyyy, mm);
    	for(int i = 0; i < start_day; i++)
       		printf("    ");
    	for(int day = 1, sd = start_day; day <= day_num; day++, sd++) {
        	printf("%4d",day);
        if(sd % 7 == 6)
            printf("\n\n");
    	}
	}
}

int day(int yyyy, int mm)
{
	int past = 0;
	for(int y=1; y<yyyy; y++)
		past = past + 365 + lunar(y);
	for(int m=1; m<mm; m++)
		past = past + day_of_month(yyyy, m);
	return (1 + past) % 7;
}
