#include <stdio.h>

int main(void){

	int horaIni, horaFim, minIni, minFim;

	scanf("%i %i %i %i", &horaIni, &minIni, &horaFim, &minFim);
	int tempoFinal;
	if(horaFim < horaIni || (horaFim == horaIni && minIni==minFim)){
		tempoFinal = 1440-((horaIni*60+minIni)-(horaFim*60+minFim));
	}
	else
		tempoFinal = (horaFim*60+minFim)-(horaIni*60+minIni);

	printf("O JOGO DUROU %i HORA(S) E %i MINUTOS(S)\n", tempoFinal/60, tempoFinal%60);
	return 0;
}