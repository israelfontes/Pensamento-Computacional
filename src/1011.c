#include <stdio.h>
#define pi 3.14159

int main(void){
	float ray; //Raio da esfera
	
	printf("Digite o raio da esfera: ");
	scanf("%f", &ray);
	if(ray < 0){
		printf("Digite um valor não negativo\n");
		return 0;
	}

	printf("VOLUME = %.3f\n", ((4.0/3)*pi*ray*ray*ray));
	return 0;
}
