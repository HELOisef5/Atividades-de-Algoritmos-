#include<stdio.h>
main(void){
	float s, p, cal;
	printf("Qual seu salario");
	scanf("%f", &s);
	printf("Informe sua prestacao");
	scanf("%f", &p);
	 cal= s*20/100;
	 if(cal<=p){
	 	printf("Emprestimo nao pode ser consedido");
	 }else {
	 	printf("Emprestimo pode ser consedido");
	 }
}
