//Fa�a um Programa que pe�a dois n�meros e imprima a soma.
#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
float num1,num2,soma;
	printf("Informe o valor do primeiro numero: ");
		scanf("%f",&num1);
	printf("Informe o valor do segundo numero: ");
		scanf("%f",&num2);
	soma = num1 + num2;
	printf("O valor da soma dos dois numeros �: %.2f",soma);
return (0);
}
