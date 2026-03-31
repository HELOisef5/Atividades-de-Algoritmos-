#include<stdio.h>
#include<math.h>
main (void){
	float cA, cO, H, raiz;
	printf("Qual o valor do cateto adjascente");
	scanf("%f", &cA);
	printf("Qual o valor do cateto oposto");
	scanf("%f", &cO);
	H= cA*cA+ cO*cO;
	raiz=sqrt(H);
	printf("A hipotenusa e de= %0.2f", raiz);
}
