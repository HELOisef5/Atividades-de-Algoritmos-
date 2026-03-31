#include<stdio.h>
main(void){
	float n1, n2, med;
	printf("Qual o valo do primeiro e segundo numero");
	scanf("%f %f", &n1 ,&n2);
	 if(n1>n2){
	 	printf("\nO primeiro numero e o maior");
	 } else {
	 	printf("\nO segundo numero e o maior");
	 	
	 }
      med= (n1+n2)/2;
      printf("\n A media dos numeros e de= %0.2f", med);
      
	 }
