#include<stdio.h>
void horario(int entrada){
	int hora_segundo = 3600, horas, minutos, segundos;
	horas = (entrada/hora_segundo);
	minutos = (entrada - (hora_segundo*horas))/60;
	segundos = (entrada - (hora_segundo*horas) - (minutos*60));
	printf("O horario eh: %dh %dm %ds", horas, minutos, segundos);
}
void main(){
	int entrar_segundos;
	printf("Entre com os segundos: ");
	scanf("%d", &entrar_segundos);
	horario(entrar_segundos);
}
