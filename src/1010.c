#include <stdio.h>

int main(void){
	int product1, units1;
	int product2, units2;
	float price1, price2;
	
	scanf("%i %i %f", &product1, &units1, &price1);
	if(product1 < 0 || units1 < 0 || price1 < 0){
		printf("Por favor, digite apenas valores não negativos\n");
		return 0;
	}

	scanf("%i %i %f", &product2, &units2, &price2);
	if(product2 < 0 || units2 < 0 || price2 < 0){
		printf("Por favor, digite apenas valores não negativos\n");
		return 0;
	}

	printf("VALOR A PAGAR: R$ %.2f\n", ((units1*price1) + (units2*price2)));
	return 0;
}
