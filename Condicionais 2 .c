#include<stdio.h>
main(void){
	int h1, h2, m1, m2, soma1, soma2, HV, HN, MV, MN;
	printf("Insira a idade do primeiro homem");
	scanf("%d", &h1);
	printf("\nInsira a idade do segundo homem");
	scanf("%d", &h2);
	printf("\nInsira a idade da  primeira mulher");
	scanf("%d", &m1);
	printf("\nInsira a idade da segunda mulher");
	scanf("%d", &m2); 

	if(h1>h2){
	HV=h1;		
	} else{
	HN=h1;		
	} 
	if(h2>h1){
		HV=h2;
	}else{
		HN=h2;
	}
	if (m1>m2){
		MV=m1;
	} else{
		MN=m1;
	}
	if(m2>m1){
		MV= m2;
	}else{
		MN=m2;
	}
	soma1= HV+MN;
	soma2= HN+MV;
	printf("\nA idade do homem mais velho com a mulher mais nova e: %d", soma1);
	printf("\nA idade do homem mais novo com a mulher mais velha e: %d", soma2);
}
