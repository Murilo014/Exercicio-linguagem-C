//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.;
#include <stdio.h>
#include <locale.h> 

int main (){
setlocale(LC_ALL,"portuguese");
    float raio,A;
        printf("Informe o raio de um circulo: ");
            scanf("%f",&raio);
    
    
    A = 3.14 * (raio * raio);

printf("Área do circulo: %2.f m2",A);
return(0);
}