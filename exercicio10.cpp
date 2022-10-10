//Faça um Programa que peça a temperatura em graus Celsius
//transforme e mostre em graus Fahrenheit.

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
    float c,f;
        printf("Informe a temperatura em graus Celsius:");
            scanf("%f",&c);

        f = (c * 1.8) + 32;

        printf("%.2f graus Celsius = %.2f graus Fahrenheit.",c,f);
return(0);
}