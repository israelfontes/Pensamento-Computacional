#include <stdio.h>
  
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int numberOfEmployee;  //Número de indentificação do funcionário
    int hoursWorked;       //Horas trabalhadas pelo funcionário naquele mês
    float valuePerHour;    //Valor por hora trabalhada
    
    printf("Digite o número do usúario: ");
    scanf("%i", &numberOfEmployee);
    if(numberOfEmployee < 0){  //Verifica se o número digitado é menor que 0
        printf("O número do empregado precisa ser maior que 0.");
        return 0;
    }
    
    printf("Digite o número de horas por ele trabalhado: ");
    scanf("%i", &hoursWorked);
    if(hoursWorked < 0){ //Verifica se é menor que 0
        printf("O número de horas trabalhadas precisa ser maior ou igual a 0.");
        return 0;
    }
    
    printf("Digite o valor pago por hora de trabalho: ");
    scanf("%f", &valuePerHour); //Verifica se é menor que 0
    if(valuePerHour < 0){
        printf("O valor pago por hora precisa ser maior que 0.");
        return 0;
    }
    
    printf("Número do empregado: %i\n", numberOfEmployee);
    printf("Salário: %f\n", (hoursWorked*valuePerHour));
    return 0;
}
