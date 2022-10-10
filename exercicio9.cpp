//Faça um Programa que peça a temperatura em graus Fahrenheit
//transforme e mostre a temperatura em graus Celsius.
//C = 5 * ((F-32) / 9).

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
    float f,c;
        printf("Informe a temperatura em graus Fahrenheit: ");
            scanf("%f",&f);

        c = 5 * (f - 32) / 9;

        printf("%.2f graus Fahrenheit = %.2f graus Celsius.",f,c);
return(0);
}