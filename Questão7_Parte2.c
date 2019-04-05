#include<stdio.h>
void verificar_idade(int x){
	if (x >= 18 && x <= 70){
		printf("\n\t Sua votacao eh OBRIGATORIA!");
	}else{
		if(x <= 15 || x > 70){
			printf("\n\tSeu voto eh FACULTATIVO!");
		}
	}
}

void main(){
	char nome;
	int idade;
	long int titulo;
	printf("\n\t NOME: ");
	scanf("%s", &nome);
	printf("\n\t IDADE: ");
	scanf("%d", &idade);
	printf("\n\t TITULO DE ELEITOR: ");
	scanf("%li", &titulo);
	verificar_idade(idade);
}
