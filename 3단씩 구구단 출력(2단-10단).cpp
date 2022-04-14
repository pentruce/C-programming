#include <stdio.h>
int main() {
	int sum = 0;
	for(int z = 2; z < 10; z = z+3){
		for(int y = 1; y < 10; y++){
			sum = z * y; 
			printf("%d x %d = %d\t", z, y, sum);
			
			sum = (z+1) * y; 
			printf("%d x %d = %d\t", (z+1), y, sum);
			
			sum = (z+2) * y;
			printf("%d x %d = %d\n", (z+2), y, sum);
		}
		printf("\n");
	}
//}  

//int main() {
	const int WIDTH = 5; //한줄에 5개 출력
	const int MAX = 15;
	for(int i = 2; i <=15; i +=WIDTH){
		for(int b = 1; b <=9; b ++) {
			for(int c = 0; c <WIDTH ; c++) {
				if((i+c)>MAX) {
					break;
				}
				printf("%d x %d = %d\t", (i+c), b, (i+c)*b);	
				
			}
			printf("\n");
			
		}
	}
}


