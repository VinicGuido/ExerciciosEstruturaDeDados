#include<stdio.h>

int dobro (int n){
	int res;
	res = n*2;
	return res;
}
int quadrado (int n){
	int res;
	res = n * n;
	return res;
}
float divisao (int n1, int n2){
	float res;
	res = (n1 / n2);
	return res;
}
int resto (int n1, int n2){
	int res;
	res = (n1 % n2);
	return res;
}
int soma (int n1, int n2){
	int res;
	res = n1 + n2;
	if(res > 0){
		return 1;
	}else{
		return 0;
	}
}
void main(){
	int numero1, numero2;
	printf("Entre com dois numeros: \n");
	scanf("%d %d", &numero1, &numero2);
	printf("\n\n\t %d %d", numero1, numero2);
	printf("\n\t O dobro dos numeros eh: %d, %d", dobro(numero1), dobro(numero2));
	printf("\n\t O quadrado dos numeros eh: %d, %d", quadrado(numero1), quadrado(numero2));
	printf("\n\t A divisao entre os numeros eh: %.2f", divisao(numero1, numero2));
	printf("\n\t O resto da divisao entre os numeros eh: %d", resto(numero1, numero2));
	if(soma(numero1, numero2) == 1){
		printf("\n O resultado da soma dos numeros eh: %d Portanto, eh POSITIVO", (numero1+numero2));
	}else{
		printf("\n O resultado da soma dos numeros eh: %d Portanto, eh NEGATIVO", (numero1+numero2));
	}
}
