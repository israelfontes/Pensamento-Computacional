#include <stdio.h>
#include <string.h>

int main(void){
	
	char nameOfSellers[20]; //Nome do vendedor
	float fixedSalary; 	//Salário fixo do vendedor
	float salesTotal; 	//Vendas totais do vendedor
	
	printf("Digite o primeiro nome do vendedor: ");
	fgets(nameOfSellers, 20, stdin);
	
	printf("Digite o salário fixo do vendedor: ");
	scanf("%f", &fixedSalary);
	if(fixedSalary < 0){ 
		printf("Digite um valor não negativo\n");
		return 0;
	}
	printf("Digite o total de vendas realizadas pelo vendedor: ");
	scanf("%f", &salesTotal);
	if(salesTotal < 0){
		printf("Digite um valor não negativo\n");
		return 0;
	}
	printf("Total = R$%.2f\n", (fixedSalary + salesTotal*0.15));
	return 0;
}
