#include <stdio.h>

int main(void){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);

	if((a+b) > c && (a+c)> b && (c+b) > a){
		printf("Perimetro: %.1f\n", a+b+c);
		return 0;
	}
	printf("Area: %.1f\n", ((a+b)*c)/2);
	return 0;
}