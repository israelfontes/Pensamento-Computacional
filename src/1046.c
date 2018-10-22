#include <stdio.h>
int main(void){
	
	int horaIni, horaFim, horas;
	scanf("%i %i", &horaIni, &horaFim);

	if(horaIni < horaFim || horaIni == horaFim)
		horas = 24-horaIni-horaFim;
	else
		horas = horaFim - horaIni;

	printf("O JOGO DUROU %i HORA(S)\n", horas);
	return 0;
}