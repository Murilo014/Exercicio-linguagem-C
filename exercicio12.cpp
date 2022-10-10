//Tendo como dado de entrada a altura (h) de uma pessoa
//construa um algoritmo que calcule seu peso ideal
//Para homens: (72.7*h) - 58
//Para mulheres: (62.1*h) - 44.7

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
    float h,peso;
        printf("Informe sua altura: ");
            scanf("%f", &h);
        
        peso = (72.7 * h) - 58;

        printf("Peso ideial para homens: %.2f\n",peso);

        peso = (62.1 * h) - 44.7;

        printf("\nPeso ideial para mulheres: %.2f",peso);
return(0);
}