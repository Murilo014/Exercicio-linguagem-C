//Fa�a um Programa que pe�a as 4 notas bimestrais e mostre a m�dia.
#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
	float nota1,nota2,nota3,nota4,media;
		printf("Insira a nota do 1� Bimestre: ");
			scanf("%f",&nota1);
		printf("Insira a nota do 2� Bimestre: ");
			scanf("%f",&nota2);
		printf("Insira a nota do 3� Bimestre: ");
			scanf("%f",&nota3);
		printf("Insira a nota do 4� Bimestre: ");
			scanf("%f",&nota4);
			
		media = (nota1 + nota2 + nota3 + nota4)/4;
		
		printf("A m�dia do aluno foi: %.2f",media);		
return (0);	
}
