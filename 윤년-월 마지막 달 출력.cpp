#include <stdio.h>

int main(void) {
	int day[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //leap-year
	int day2[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
	int size = sizeof(day) / sizeof(day[0]);
	int i;
	int year;
	
	printf("YEAR : ");
	scanf("%d", &year);
	
	if(( year%4==0 && year%100!=0) || year %400==0) {
		for(i = 0; i < size; i++) {	
		printf("MM: %d, dd: %d\n", i+1, day[i]);
		}
	}
	
	else {
		for(i = 0; i < size; i++){		
			printf("MM: %d, dd: %d\n", i+1, day2[i]);
		}
	}
		
	return 0;

}

	
