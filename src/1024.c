#include <stdio.h>
#include <string.h>

int main(void){
	int linhas;

	printf("Digite o número de linhas a serem criptografadas: ");
	scanf("%i", &linhas);

	if(linhas>10000)
		return 0;

	for(int linha = 0; linha<linhas; linha++){
		char entrada[1000];
		scanf("%s", entrada);

		int lengthLine = strlen(entrada);
		
		for(int caracter = 0; caracter<lengthLine; caracter++){
			if((entrada[caracter] >= 65 && entrada[caracter] <= 90) || (entrada[caracter] >= 61 && entrada[caracter] <= 122)){
				entrada[caracter]+=3;
			}
		}

		int tempLength = lengthLine-1;

		for(int caracter = 0; caracter<lengthLine/2; caracter++){
			char temp = entrada[caracter];
			entrada[caracter] = entrada[tempLength];
			entrada[tempLength] = temp;
			tempLength--;
		}

		for(int caracter = (lengthLine-1)/2; caracter<lengthLine; caracter++)
			entrada[caracter]-=1;

		printf("%s\n", entrada);


	}

	return 0;
}

