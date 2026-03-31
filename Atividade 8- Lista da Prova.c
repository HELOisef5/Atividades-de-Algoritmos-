#include<stdio.h>
main(void){
	float p, v, vf;
	printf("Qual o valor do produto");
	scanf("%f", &p);
	
	if(p>=20){
		v= p*30/100;
		vf= p+v;
	}else if (p<20){
		v=p*45/100;
		vf= p+v;
	}
	printf("O valor final do produto sera= %0.3f", vf);
}
