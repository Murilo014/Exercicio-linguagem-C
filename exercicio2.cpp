// Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese"); // Define a acentuação nos textos mostrados (Como se fosse um CHARSET)
	float numero;
		printf("Insira um numero: ");
			scanf("%f",&numero);
		printf("O numero inserido foi %.2f",numero);	
return (0);
}
