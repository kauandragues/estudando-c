#include <stdio.h>
/*
Autor do exerc�cio: Luis Damas
Resolvido por: github/kauandragues

02/06/2025

Escreva um programa que indique o n�mero de dias em um m�s 
*/
int main(){
	int mes;
	printf("Digite o numero do mes: ");
	scanf("%d",&mes);
	
	if(mes == 2)
		printf("O mes 2 tem 28 dias");
	else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
		printf("O mes %d tem 31 dias", mes);
	else
		printf("O mes %d tem 30 dias", mes);
	return 0;
	
}