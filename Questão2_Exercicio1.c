#include<stdio.h>

int resto_divi(int numero1, int numero2){
	int resto;
	resto = (numero1 % numero2);
	return resto;
}
void main(){
	int num1, num2, retornar;
	printf("Digite dois numeros para dividir: ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	resto_divi(num1, num2);
	retornar = resto_divi(num1, num2);
	
	printf("O resultado do resto da divisao sera: %d", retornar);
}
