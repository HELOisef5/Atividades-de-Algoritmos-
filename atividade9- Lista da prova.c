#include<stdio.h>
#include<math.h>
main(void){
	float a,b,c,x1,x2, delta;
	printf("Insira o valor de a");
	scanf("%f", &a);
	printf("Insira o valor de b");
	scanf("%f", &b);
	printf("Insira o valor de c");
	scanf("%f", &c);
	delta=b*b-4*a*c;
	if(delta<0){
		printf("\nRaiz nao real");
	}else{
	
	x1= (-b+sqrt(delta))/2*a;
	x2= (-b -sqrt(delta))/2*a;
	printf("\nAs raizes sao %0.2f %0.2f", x1, x2);
	
}
}
