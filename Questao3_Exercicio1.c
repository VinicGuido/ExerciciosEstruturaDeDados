#include<stdio.h>

void valorproduto(int n1, int n2){
	int somaimpar;
	while (n1 != 1){
		if(n1 % 2 == 1){
			printf("\t%d  |  %d \n", n1, n2);
			somaimpar += n2;
		}else{
			printf("\t%d  |  %d \n", n1, n2);
		}
		n1 = n1 / 2;
		n2 = n2 * 2;
		if(n1 == 1){
			printf("\t%d  |  %d \n", n1, n2);
			somaimpar += n2;
		}
	}
	printf("\n O total recebido pela soma dos impares eh: %d", somaimpar);
}
int main (){
	int numero1, numero2;
	printf("Entre com o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Entre com o segundo numero: ");
	scanf("%d", &numero2);
	printf("\n");
	printf("\t %d * %d \n", numero1, numero2);
	valorproduto(numero1, numero2);
	return 0;
}
