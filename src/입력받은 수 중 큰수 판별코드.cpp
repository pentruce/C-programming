#include <stdio.h>
int main() {
	
	int a, b, c, d, e;
	printf("a: , b: , c: , d: , e: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	int max, min;
	max = min = a;
	
	
	if (max <b) {
		max = b;
	}
	if (max  <c) {
		max = c;
	}

	if (max <d) {
		max = d;
	}

	if (max <e) {
		max = e;
	}	
	printf("\nbiggest number: %d\t", max);
	
	
	if (min>b) {
		min = b;
	}
	if (min>c) {
		min = c;
	}

	if (min>d) {
		min = d;
	}

	if (min>e) {
		min = e;
	}	
	printf("smallest number: %d", min);
	
	return 0;
}
