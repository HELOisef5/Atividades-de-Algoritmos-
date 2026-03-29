#include<stdio.h>
main (void){
	int n1, n2,soma;
	printf("\nQual o valor dos dois numeros");
	scanf("%d %d", &n1, &n2);
	soma= n1+n2;
	if(soma>=10){
		printf("\nSeu novo valor e= %d", soma);
	}else{
		printf("\nValor somado insuficiente");
	}
}
