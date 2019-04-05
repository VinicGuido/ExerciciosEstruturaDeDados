#include<stdio.h>
#define TAM 5

int verificarVetor(int *vt, int retornar){
	int c, maior = vt[0], menor = vt[1];
	for (c = 0; c < TAM; c++){
		if(maior < vt[c]){
			maior = vt[c];
		}else{
			if(menor > vt[c])
			menor = vt[c];
		}
	}
	if(retornar == 1){
		return maior;
	}else{
		return menor;
	}
	return 0;
}
void main(){
	int c, vetor[TAM];
	printf("Entre com numeros para preencher o vetor: ");
	for(c = 0; c < TAM; c++)
	scanf("%d", &vetor[c]);
	
	printf("\n\t O maior elemento do vetor eh: %d", verificarVetor(vetor, 1));
	printf("\n\t O menor elemento do vetor eh: %d", verificarVetor(vetor, 0));
}
