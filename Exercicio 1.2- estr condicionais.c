#include<stdio.h>
main(void){
	float n1, n2, n3, med, aux;
	float numMaior, numMenor;
	printf("Insira o primeiro numero\n");
	scanf("%f", &n1);
	printf("Insira o segundo numero\n");
	scanf("%f", &n2);
	printf("Insira o terceiro numero\n");
	scanf("%f", &n3);
	if (n1==n2|| n1==n3|| n2==n3){
		printf("\n Os numeros nao podem ser iguais ");
		printf("\nInsira novamente os numeros");
		printf("\nInsira o primeiro numero\n");
		scanf("%f", &n1);
		printf("Insira o segundo numero\n");
		scanf("%f", &n2);
		printf("Insira o terceiro numero\n");
		scanf("%f", &n3);
	}
	med=(n1+n2+n3)/3;
	printf("\nSua media e %f", med);
	numMaior= 0;
	numMenor= n1;
	if(n1> numMaior){
		numMaior=n1;
	}else {
		numMenor=n1;
	} 
	if(n2>numMaior){
		numMaior=n2;
	}else {
		numMenor=n2;
		
	} 
	 if(n3>numMaior){
	 	numMaior=n3;
	 }else if (n3<numMenor){
	 	numMenor=n3;
	 }
	 printf("\nO maior numero e: %0.2f ", numMaior);
	 printf("\nO menor numero e:%0.2f", numMenor);
	
}
