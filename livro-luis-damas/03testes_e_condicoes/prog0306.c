#include <stdio.h>
/*
Autor do exerc�cio: Luis Damas
Resolvido por: github/kauandragues
14/05/2025

Escreva um programa que solicite ao utilizador um sal�rio e mostre o importo a pagar
	-Se o sal�rio for negativo ou zero mostre o como "Sal�rio Invalido"
	-Se o sal�rio for maior que 1000, paga 10% de imposto, se n�o paga apenas 5%
*/

int main(){
	float salario;
	printf("Digite o seu salario: ");
	scanf("%f",&salario);
	
	if(salario <= 0)
		printf("Salario Invalido!");
	else if(salario < 1000)
		printf("O imposto a pagar eh: %.2f",salario*0.05);
	else
		printf("O imposto a pagar eh: %.2f", salario*0.1);	
	return 0;
}