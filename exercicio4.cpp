//Faça um Programa que peça as 4 notas bimestrais e mostre a média.
#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
	float nota1,nota2,nota3,nota4,media;
		printf("Insira a nota do 1º Bimestre: ");
			scanf("%f",&nota1);
		printf("Insira a nota do 2º Bimestre: ");
			scanf("%f",&nota2);
		printf("Insira a nota do 3º Bimestre: ");
			scanf("%f",&nota3);
		printf("Insira a nota do 4º Bimestre: ");
			scanf("%f",&nota4);
			
		media = (nota1 + nota2 + nota3 + nota4)/4;
		
		printf("A média do aluno foi: %.2f",media);		
return (0);	
}
