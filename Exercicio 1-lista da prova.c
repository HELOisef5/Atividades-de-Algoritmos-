#include<stdio.h>
main(void){
	float n, nm, nn;
	printf("Insira o numero\n");
	scanf("%f", &n);
	
	nm= n+1;
	nn= n-1;
	printf("\nSucessor= %0.2f", nm);
	printf("\nAntecessor= %0.2f", nn);
}
