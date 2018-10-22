#include <stdio.h>

int main(void){
	
	int valores[2];
	scanf("%i %i", valores, valores+1);
	if(valores[0] > valores[1]){
		if(!valores[0]%valores[1]){
			printf("Sao Multiplos\n");
			return 0;
		}
		printf("Nao sao Multiplos\n");
	}

	if(!valores[1]%valores[0]){
		printf("Sao Multiplos\n");
		return 0;
	}
	
	printf("Nao sao Multiplos\n");
	return 0;
}