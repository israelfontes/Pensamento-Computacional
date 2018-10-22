#include <stdio.h>

int main(void){
	int numbers[5];
	byte pares = 0;
	for(int i = 0; i < 5; i++){
		scanf("%i", numbers+i);
		if(!numbers[i]%2)
			pares+=1;
	}
	printf("%c valores pares\n", pares);

	return 0;
}