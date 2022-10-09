//Fa�a um Programa que converta metros para cent�metros.
#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
	float medida;
		printf("Informe a metragem para ser convertida em centimetros: ");
			scanf("%f",&medida);
		printf("Resultado da convers�o: %.2f",medida*100);
		printf("CM");
return(0);
}
