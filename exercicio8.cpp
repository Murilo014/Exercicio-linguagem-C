//Faça um Programa que pergunte quanto você ganha por hora
//e o número de horas trabalhadas no mês. Calcule e mostre 
//o total do seu salário no referido mês.

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
    float salario, hora, resultado;

    printf("Informe suas horas tarbalhadas no mes: ");
        scanf("%f",&salario);
    printf("Informe seu salario por hora: ");
        scanf("%f",&hora);

        resultado = salario * hora;

    printf("Salario total mensal: %.2f",resultado);
return(0);
}