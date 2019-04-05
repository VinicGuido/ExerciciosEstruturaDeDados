#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int soma(void){
	system("cls");
	int res, x1, x2;
	printf("\n\n Entre com 2 valores para somar: ");
	scanf("%d %d", &x1, &x2);
	res = x1 + x2;
	printf("\n O resultado eh: %d", res);
	getch();
	return 0;
}

int subtracao(void){
	system("cls");
	int res, x1, x2;
	printf("\n\n Entre com 2 valores para subtrair: ");
	scanf("%d %d", &x1, &x2);
	res = x1 - x2;
	printf("\n O resultado eh: %d", res);
	getch();
	return 0;
}

int multiplicacao(void){
	system("cls");
	int res, x1, x2;
	printf("\n\n Entre com 2 valores para multiplicar: ");
	scanf("%d %d", &x1, &x2);
	res = x1 * x2;
	printf("\n O resultado eh: %d", res);
	getch();
	return 0;
}
int divisao(void){
	system("cls");
	int res, x1, x2;
	printf("\n\n Entre com 2 valores para dividir: ");
	scanf("%d %d", &x1, &x2);
	res = x1 / x2;
	printf("\n O resultado eh: %d", res);
	getch();
	return 0;
}

int desktop(void){
	int opcao;
	system("cls");
	printf("\n\t #################################");
	printf("\n\t ####  OPERACOES MATEMATICAS  ####");
	printf("\n\t #################################");
	printf("\n\n Escolha a operacao matematica de sua preferencia: ");
	printf("\n\n [1] SOMA \n [2] SUBTRACAO \n [3] MULTIPLICACAO \n [4] DIVISAO \n [0] SAIR \n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			soma();
			break;
		case 2:
			subtracao();
			break;
		case 3:
			multiplicacao();
			break;
		case 4:
			divisao();
			break;
		case 0:
			break;
		default:
			printf("OPCAO INVALIDA");
			getch();
	}
	return opcao;
}

void main(){
	int i = 1;
	while (i != 0){
		i = desktop();
	}
}
