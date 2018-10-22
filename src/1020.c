#include <stdio.h>

int main(void){
	
	int dias;
	scanf("%i", &dias);
	printf("%i ano(s)\n",dias/365);
	dias = dias%365;
	printf("%i mes(es)\n", dias/30);
	dias = dias%30;
	printf("%i dia(s)\n", dias);
	
	return 0;
}