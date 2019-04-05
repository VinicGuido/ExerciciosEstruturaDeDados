#include<stdio.h>

int dobrar(int x){
	x = x * 2;
	return x;
}
int mult(int x1, int x2){
	int res;
	res = x1 * x2;
	return res;
}
int verificar(int numero){
	if (numero > 0){
		return 1;
	}else{
		if(numero < 0){
			return 2;
		}else{
			return 0;
		}
	}
}
void main(){
	int num1, num2;
	printf(" Digite dois valores, podendo ser positivo ou negativo:");
	scanf("%d %d", &num1, &num2);
	printf("\n O dobro eh: %d %d", dobrar(num1), dobrar(num2));
	printf("\n A multiplicacao de %d x %d eh igual a %d", num1, num2, mult(num1, num2));
	if(verificar(mult(num1, num2)) == 1){
		printf("\n O resultado da multiplicacao eh POSITIVO");
	}else{
		if(verificar(mult(num1, num2)) == 2){
			printf("\n O resultado da multiplicacao eh NEGATIVO");
		}else{
			printf("\n O resultado da multiplicacao eh NULO");
		}
	}
	
}

