#include<stdio.h>
int main(){
	//Exchange Rate
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 986.28 / 100;
	const float RATE_EUR = 1342.13;
	const float RATE_CNY = 193.17;
	const float RATE_GBP = 1604.74;
	int inputWon;
	int returnWon = 0;
	int returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10;
	
	float outputDollar = 0;
	int outputDollarFinal = 0;
	
	float outputYen = 0;
	int outputYenFinal = 0;
	
	float outputEur = 0;
	int outputEurFinal = 0;
	
	float outputCny = 0;
	int outputCnyFinal = 0;
	
	float outputGbp = 0;
	int outputGbpFinal = 0;
	
	float outputmoney;
	float inputmoney;
	float changeRate;
	
	printf("input Won: ");
	scanf("%d", &inputWon);
	
	int No;
	printf("1. USD / 2. JPY / 3. EUR / 4. CNY / 5. GBP\n");
	scanf("%d",  &No);
	
	switch (No) {
		
		case 1:
			changeRate = RATE_USD;
			break;
	
		case 2:
			changeRate = RATE_JPY;
			break;
			
		case 3:
			changeRate = RATE_EUR;
			break;
		
		case 4:
			changeRate = RATE_CNY;
			break;
			
		case 5:
			changeRate = RATE_GBP;
			break;
		}
	
	//Money Ex calc.
	outputmoney = inputWon / changeRate;
	returnWon = outputmoney *100;
	returnWon = ((int)((returnWon % 100) * changeRate / 100) / 10 * 10);		
	printf("%d WON -> %.2f\n", inputWon, outputmoney);
	printf("%.2f, %d WON RE\n", outputmoney, returnWon);
	
	
	//Exchange Calc.
	returnWon1000 = returnWon / 1000;
	returnWon = returnWon % 1000;
	returnWon500 = returnWon / 500;
	returnWon = returnWon % 500;
	returnWon100 = returnWon / 100;
	returnWon = returnWon % 100;
	returnWon50 = returnWon / 50;
	returnWon = returnWon % 50;
	returnWon10 = returnWon / 10;
	returnWon = returnWon % 10;	
	printf("1000: %d, 500: %d, 100: %d, 50: %d, 10: %d", returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
	
	return 0;
}
