#include<stdio.h>

int verificar(int x){
	if(x > 0){
		printf("\n O numero eh positivo. Portanto, eh VERDADEIRO.", x);
	}else{
		if(x < 0){
			printf("\n O numero eh negativo. Portanto, eh FALSO", x);
		}else{
			printf("\n O numero eh nulo. Portanto, VOCE PRECISA SELECIONAR UMA DAS OPÇOES");
		}
	}
	return 0;
}
void main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	verificar(n);
}
