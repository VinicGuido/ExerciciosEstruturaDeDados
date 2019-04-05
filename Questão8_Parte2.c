#include<stdio.h>

void quadradoAnalise (int x){
	if(x > 0){
		x *= x;
		printf("\nO quadrado do primeiro numero eh: %d", x);	
	}
}
void intervaloAnalise (int y){
	if(y > 10 && y < 100){
		printf("\nO segundo numero esta entre 10 e 100 - intervalo permitido!");
	}
}
void compararNumeros (int a, int b){
	int res;
	if (b < a){
		res = a - b;
		printf("\nO segundo numero eh menor que o primeiro. Portanto, a diferença eh igual a: %d", res);
	}else{
		a += 1;
		printf("\nO primeiro numero eh menor que o segundo. Portanto, o primeiro numero eh somado com 1: %d", a);
	}
}
void main(){
	int numero1, numero2;
	printf("Entre com dois numeros: ");
	scanf("%d %d", &numero1, &numero2);
	printf("\n\t %d %d", numero1, numero2);
	quadradoAnalise(numero1);
	intervaloAnalise(numero2);
	compararNumeros(numero1, numero2);
}
