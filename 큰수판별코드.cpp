#include <stdio.h>
int main() {
	//kopo15_박소현

   printf("Input the front number of secuity number : ");   
   int arr[6];
   for(int i = 0; i < 6; i++) {
    scanf("%1d", & arr[i]); 
   }
   
   int num = 1900 + arr[0]*10 + arr[1];
   printf("2022 - International age is :%d\tKorean age is : %d", 2022 - num, 2022 - num+1);
}

	