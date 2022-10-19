#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
setlocale(LC_ALL,"Portuguese");
    float m2,litrousado;
    int precolata,resp;

    do{
        system("cls");
        printf("-----------BEM-VINDO-----------\n");
        printf("Informe o tamanho da area que vai ser pintada (m2): ");
            scanf("%f", &m2);

            litrousado = m2 / 3;

        printf("\nQuantidade de tinta usada (EM LITROS): %.2fL\n",litrousado);

            litrousado = ceil (litrousado);
     if (litrousado > 18){
            litrousado = litrousado / 18;
        printf("\nVao ser usadas %.0f latas.\n",litrousado);
            litrousado = ceil (litrousado); 
            precolata = litrousado * 80;
        printf("\nPreco final: R$ %.d.\n",precolata);
    } 
     else if (litrousado <= 18) {
        printf("\nVai ser necessario apenas 1 lata.\n");
        printf("\nPreco final: R$ %d\n",precolata = 80);
    
    } 
        printf("\nNova compra SIM(1) NAO(2): ");
            scanf("%d",&resp);

    } 
    while(resp == 1);
return (0);
}
