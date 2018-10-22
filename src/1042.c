#include <stdio.h>

int main(void){

	int valores[3];
	int desordenado[3];
	int temp;

	scanf("%i %i %i", valores, valores+1, valores+2);
	
	for (int i = 0; i < 3; ++i){
		desordenado[i] = valores[i];
	}

	for(int i = 0; i < 3; i++){
		for (int ii = i; ii < 3; ++ii){
			if(valores[i] > valores[ii]){
				temp = valores[i];
				valores[i] = valores[ii];
				valores[ii] = temp;
			}
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		printf("%i\n", valores[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; ++i){
		printf("%i\n", desordenado[i]);
	}
	return 0;
}