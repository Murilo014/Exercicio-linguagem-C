#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"Portuguese");
    float salhora, horames,salbruto,desconto,liquido;
        printf("Informe seu salario ganho por hora: ");
            scanf("%f", &salhora);
        printf("Informe as horas trabalhadas mensalmente: ");
            scanf("%f", &horames);
        salbruto = salhora * horames;
        printf("\nSALARIO BRUTO: R$ %.2f", salbruto);

    desconto = salbruto * 0.11;
        printf("\n\nIR (11%): R$ %.2f", desconto);
    desconto = salbruto * 0.8;
        printf("\nINSS (8%): R$ %.2f", desconto);
    desconto = salbruto * 0.05;
        printf("\nSINDICATO (5%): R$ %.2f", desconto);
    desconto = 0.24;
    liquido = salbruto * desconto;
    liquido = salbruto - liquido; 
        printf("\nSalario Liquido: R$ %.2f", liquido);



return (0);
}