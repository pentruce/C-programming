#include <stdio.h>
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
	
	scanf("%d", &inputWon);
	printf("input Won: ");
	
	int No;
	printf("1. USD / 2. JPY / 3. EUR / 4. CNY / 5. GBP\n");
	scanf("%d",  &No);
	
	int array[4] = {USD, JPY, EUR, CNY, GBP};
	
	
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

	
	
	
	
	
	
	
	
}