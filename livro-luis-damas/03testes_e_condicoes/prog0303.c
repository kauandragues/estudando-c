#include <stdio.h>
/*
Autor do exerc�cio: Luis Damas
Resolvido por: github/kauandragues
13/05/2025

Implemente um programa que indique se o inteiro lido � zero ou n�o
*/
int main(){
	int numero;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	if(numero == 0)
		printf("\nO numero eh zero!");
	else
		printf("\nO numero nao eh zero!");
	return 0;
	
	/*
	if(numero != 0) ou if(numero) -> poderia ser if(x), pois if(x) verifica se x � true, ou seja, !=0 
		printf("\nO numero nao eh zero!");
	else
		printf("\nO numero eh zero!");
	
	*/
	
}