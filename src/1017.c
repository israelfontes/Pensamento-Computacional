#include <stdio.h>

int main(void){
	
	int horas, velocidade;
	scanf("%i", &horas);
	scanf("%i", &velocidade);
	printf("%.3f\n", (velocidade*horas)/12);
	
	return 0;
}