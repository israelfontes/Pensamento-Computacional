#include <stdio.h>

int main(void){
	
	int segundos;
	scanf("%i", &segundos);
	printf("%i:",segundos/3600);
	segundos = segundos%3600;
	printf("%i:", segundos/60);
	segundos = segundos%60;
	printf("%i\n", segundos);
	
	return 0;
}