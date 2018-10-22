#include <stdio.h>

int main(void){
	int codigo, qntd;
	float valorT;
	scanf("%i %i", &codigo, &qntd);

	switch(codigo){
		case 1:
			valorT = qntd*4.00;
			break;
		case 2:
			valorT = qntd*4.5;
			break;
		case 3:
			valorT = qntd*5.0;
			break;
		case 4:
			valorT = qntd*2.0;
			break;
		case 5:
			valorT = qntd*1.5;
		default:
			return 0;
	}

	printf("Total: R$ %f\n", valorT);
	return 0;
}