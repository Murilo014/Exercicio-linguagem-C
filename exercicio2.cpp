// Fa�a um Programa que pe�a um n�mero e ent�o mostre a mensagem O n�mero informado foi [n�mero].
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese"); // Define a acentua��o nos textos mostrados (Como se fosse um CHARSET)
	float numero;
		printf("Insira um numero: ");
			scanf("%f",&numero);
		printf("O numero inserido foi %.2f",numero);	
return (0);
}
