#include <stdio.h>
#include <stdlib.h>

int termo;
int cont;
int num1;
int num2;
int num3;
num1=1;
num2=1;
int result;
int result2;
int modo;

int main() {
	printf("Escolha entre o modo recursivo(1) ou o modo interativo(2)\n");
	printf("Para finalizar o sistema pressione qualquer tecla diferente de 1 ou 2\n");
	scanf("%d",&modo);
	if(modo==1){
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
//modo recursivo:
printf("Escolha ate que n termo que gostaria de calcular:\n");
	scanf("%d",&termo); // escolha ate que n termo gostaria de calcular
	printf("1,1,");
	do{
		
		num3=num1+num2;
		num1=num2;
		num2=num3;
		printf("%d,",num2);
		cont++;
}while((cont+2)<termo);
 printf("\no termo final da soma e:%d\n",num3);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}
if(modo==2){
//modo interativo:

printf("Para sair do sistema coloque o valor de - 1:\n");
printf("1+1=");
scanf("%d",&result);
if(result==-1){
	printf("fim do sistema");
	return 0;	
}
num3=num1+num2;
if(result!=2){
do
{

printf("errado, repita novamente\n");	
printf("1+1=");
scanf("%d",&result);
if(result==-1){
	printf("fim do sistema");
	return 0;	
}
num3=num1+num2;	
}while(result!=2);
}

if(result==2){
	num3=0;
	num2=2;
do{

	printf("%d+%d=",num1,num2);
	scanf("%d",&result);
		if(result==-1){
	printf("fim do sistema");
	return 0;	
}
	    num3=num1+num2;
	    if(result!=num3){
	    	do{
			printf("errado, repita novamente\n");
				printf("%d+%d=",num1,num2);
	scanf("%d",&result);
	if(result==-1){
	printf("fim do sistema");
	return 0;	
}
	    num3=num1+num2;
			}while(result!=num3);	
		}
	    if(result=num3){
		
		num1=num2;
		num2=num3;
		}
		
	
		
}while(result!=-1);
}
}
if((modo!=1) || (modo!=2)){
	printf("fim do sistema");
}






	
	
	
	
	
	
	
	return 0;
}
