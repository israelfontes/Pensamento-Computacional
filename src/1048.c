#include <stdio.h>

int main(void){
	float salario;
	scanf("%f", &salario);
	if(salario < 0)
		return 0;

	if(salario > 0.0 && salario <= 400.0){
		printf("Reajuste ganho: %.2f\n", salario*0.15);
		salario = salario*1.15;
		printf("Novo salario: %.2f\n", salario);
		printf("Em percentual: 15%\n");
	}else if(salario > 400 && salario <= 800){
		printf("Reajuste ganho: %.2f\n", salario*0.12);
		salario = salario*1.12;
		printf("Novo salario: %.2f\n", salario);
		printf("Em percentual: 12%\n");
	}else if(salario > 800 && salario <= 1200){
		printf("Reajuste ganho: %.2f\n", salario*0.1);
		salario = salario*1.1;
		printf("Novo salario: %.2f\n", salario);
		printf("Em percentual: 10%\n");
	}else if(salario > 1200 && salario <= 2000){
		printf("Reajuste ganho: %.2f\n", salario*0.07);
		salario = salario*1.07;
		printf("Novo salario: %.2f\n", salario);
		printf("Em percentual: 7%\n");
	}else{
		printf("Reajuste ganho: %.2f\n", salario*0.04);
		salario = salario*1.04;
		printf("Novo salario: %.2f\n", salario);
		printf("Em percentual: 4%\n");
	}

	return 0;
}