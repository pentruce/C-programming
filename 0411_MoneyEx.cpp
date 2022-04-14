#include<stdio.h>

int main(){
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
	
	printf("input Won: ");
	scanf("%d", &inputWon);
	
	int No;
	printf("1. USD / 2. JPY / 3. EUR / 4. CNY / 5. GBP\n");
	scanf("%d",  &No);
	
	if (No == 1) {
	// USD
	outputDollar = inputWon / RATE_USD; // 40.55
	outputDollarFinal = outputDollar;
	returnWon = outputDollar * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_USD / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d WON -> %10.2f USD\n", inputWon, outputDollar);
	printf("%d USD, %d WON EX\n", outputDollarFinal, returnWon);
	
	}
	else if (No == 2) {
	// JPY
	outputYen = inputWon / RATE_JPY;
	outputYenFinal = outputYen;
	returnWon = outputYen * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_JPY / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d WON -> %10.2f JPY\n", inputWon, outputYen);
	printf("%d JPY, %d WON EX\n", outputYenFinal, returnWon);
		
	}
	else if (No==3) {
	
	// EUR
	outputEur = inputWon / RATE_EUR;
	outputEurFinal = outputEur;
	returnWon = outputEur * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_EUR / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d WON -> %10.2f EURO\n", inputWon, outputEur);
	printf("%d EURO, %d WON EX\n", outputEurFinal, returnWon);

	}
	
	else if (No==4) {
	// CNY
	outputCny = inputWon / RATE_CNY;
	outputCnyFinal = outputCny;
	returnWon = outputCny * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_CNY / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d WON -> %10.2f CNY\n", inputWon, outputCny);
	printf("%d CNY, %d WON EX\n", outputCnyFinal, returnWon);
	
	}
	
	else if (No==5) {// GBP
	outputGbp = inputWon / RATE_GBP;
	outputGbpFinal = outputGbp;
	returnWon = outputGbp * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_GBP / 100;
	returnWon = returnWon / 10 * 10;

	printf("%d WON -> %10.2f GBP\n", inputWon, outputGbp);
	printf("%d GBP, %d WON EX\n", outputGbpFinal, returnWon);


	}
	
	else {
		printf("press the wrong No. try it again!");
	}
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