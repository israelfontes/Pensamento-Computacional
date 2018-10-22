#include <stdio.h>

int main(void){
	int a,b,s;
	scanf("%d %d %d", &a, &b, &s);
	int d = (a+b+(a*b*s)*(a-b))/2;
	printf("%d eh o maior\n", d);
	return 0;
}
