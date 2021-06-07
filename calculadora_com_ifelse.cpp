#include<stdio.h>
#include<stdlib.h>



int main() {
	int opt;
	float a,b;
	
	
	system("color 43");
	printf("\n\t\t\t\t\t\tCalculadora Universal\n\n");
	
	printf("\t\t\t\t\t\tEscolha a Operacao desejada\n\n");
	printf("\t\t\t\t\t\t1-Adicao\n");
	printf("\t\t\t\t\t\t2-Subtracao\n");
	printf("\t\t\t\t\t\t3-Divisao\n");
	printf("\t\t\t\t\t\t4-Multiplicacao\n\n");
	
	printf("\t\t\t\tSelecione o numero da operacao desejada:");
	scanf("%d",&opt);
	system("pause");
	
	if (opt == 1){
		
		printf("\n\t\t\t Insira o primeiro valor: ");
		scanf("%f",&a);
		
			
		printf("\n\t\t\t Insira o segundo valor: ");
		scanf("%f",&b);
		printf("\t\t A soma dos valores foi : %.2f ",a+b);
		system("pause");
			
	}else if(opt==2){
			
		printf("\n\t\t\t Insira o primeiro valor: ");
		scanf("%f",&a);
			
		printf("\n\t\t\t Insira o segundo valor:");
		scanf("%f",&b);
		
		printf("\n\t\t A diferenca dos valores foi: %.2f",a-b);
		system("pause");
	}else if(opt == 3){
		
			
		printf("\n\t\t\t Insira o primeiro valor:");
		scanf("%f",&a);
			
			printf("\n\t\t\t Insira o segundo valor: ");
		scanf("%f",&b);
		if(b == 0){
			printf("\n\t\tErro na operacao denominador = 0");
		system("pause");
		}else{
			
			printf("\n\t\t A divisao dos numeros foi: %.2f",a/b);
		//	printf("\n\t\t O resto da divisao foi de : %.2f",int(a%b));
		system("pause");
		}
		
	}else if(opt == 4){
			
		printf("\n\t\t\t Insira o primeiro valor: ");
		scanf("%f",&a);
			
		printf("\n\t\t\t Insira o segundo valor:");
		scanf("%f",&b);
		
		printf("\n\t\t A multiplicacao dos valores foi :%.2f",a*b);
		system("pause");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	
	
	
	
	
	
	
	
	
	
	return 0;
}
