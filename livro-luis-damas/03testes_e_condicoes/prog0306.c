#include <stdio.h>

int main(){
	float salario;
	printf("Digite o seu salario: ");
	scanf("%f",&salario);
	
	if(salario <= 0)
		printf("Salario Invalido!");
	else if(salario < 1000)
		printf("O imposto a pagar eh: 5%%");
	else
		printf("O imposto a pagar eh: 10%%");	
	return 0;
}