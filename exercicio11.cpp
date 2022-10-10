//Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
//o produto do dobro do primeiro com metade do segundo
//a soma do triplo do primeiro com o terceiro.
//o terceiro elevado ao cubo.

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
    int numint1,numint2;
    float numreal, resultado;
        printf("Informe o primeiro numero INTEIRO: ");
            scanf("%d", &numint1);
        printf("Informe o segundo numero INTEIRO: ");
            scanf("%d", &numint2);
        printf("Informe um numero REAL: ");
            scanf("%f", &numreal);
        
        resultado = ((numint1 * 2) + (numint2 / 2));

        printf("Resultado do produto do dobro do primeiro numero + a metade do segundo: %.0f\n",resultado);

        resultado = (numint1 * 3) + numreal;

        printf("\nResultado da soma do triplo do primeiro numero com o terceiro numero: %.2f\n",resultado);

        resultado = numreal * numreal * numreal;

        printf("\nResultado do terceiro numero elevado ao cubo: %.2f",resultado); 



return(0);
}