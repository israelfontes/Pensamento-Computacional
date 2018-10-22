#include <stdio.h>

int main(void){

	float valorf;
	int valor;
	scanf("%f", &valorf);
	valor = valorf;
	int valor2 = valor;
	printf("NOTAS:\n");
	printf("%i nota(s) de R$ 100.00\n", valor/100);
	valor = valor%100;
	printf("%i nota(s) de R$ 50.00\n", valor/50);
	valor = valor%50;
	printf("%i nota(s) de R$ 20.00\n", valor/20);
	valor = valor%20;
	printf("%i nota(s) de R$ 10.00\n", valor/10);
	valor = valor%10;
	printf("%i nota(s) de R$ 5.00\n", valor/5);
	valor = valor%5;
	printf("%i nota(s) de R$ 2.00\n", valor/2);
	valor = valor%2; 
	printf("MOEDAS:\n");
	printf("%i moeda(s) de R$ 1.00\n", valor);
	valor = (valorf-valor2)*100;
	printf("%i moeda(s) de R$ 0.50\n", valor/50);
	valor = valor%50;
	printf("%i moeda(s) de R$ 0.25\n", valor/25);
	valor = valor%25;
	printf("%i moeda(s) de R$ 0.10\n", valor/10);
	valor = valor%10;
	printf("%i moeda(s) de R$ 0.05\n", valor/5);
	valor = valor%5;
	printf("%i moeda(s) de R$ 0.01\n", valor);
	
	return 0;
}