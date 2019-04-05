#include<stdio.h>

void exibicao(int linha, int coluna){
	int lin, col;
	for(lin = 0; lin < linha; lin++){
		printf("\n");
		for(col = 0; col < coluna; col++)
			printf("\t | N |");
	}
}
void main(){
	int num_linha, num_coluna;
	printf("Entre com o tamanho da matriz: ");
	printf("\n LINHA: ");
	scanf("%d", &num_linha);
	printf("\n COLUNA: ");
	scanf("%d", &num_coluna);
	int matriz[num_linha][num_coluna];
	exibicao(num_linha, num_coluna);
	printf("\n");
}
