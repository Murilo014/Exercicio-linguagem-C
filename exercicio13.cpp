//João Papo-de-Pescador, homem de bem, comprou um microcomputador para
//ontrolar o rendimento diário de seu trabalho. Toda vez que ele traz um peso
//de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo
//(50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.
//oão precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule
//o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa
//que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.

#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"Portuguese");
    float peso,excesso,multa;
        printf("\n     SEJA BEM-VINDO JOAO\n");
        printf("---SISTEMA DE GERENCIAMENTO---\n");
        printf("\nInforme o Kg dos peixes pescado: ");
            scanf("%f", &peso);
    if (peso > 50){
        excesso = peso - 50;
            printf("\nHouve um excesso de %.2fKg\n", excesso);
        multa = excesso * 4;
            printf("\nValor da multa a ser paga: R$ %.2f\n",multa);
    } else{
        printf("Peso dentro das normas\n");
        printf("ISENTO DE MULTA");
    }   
return (0);
}