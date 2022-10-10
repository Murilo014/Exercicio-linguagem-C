//Faça um Programa que calcule a área de um quadrado
//em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
    float a,l;
        printf("Informe as medidas do quadrado: ");
            scanf("%f",&l);

        a = l * l;

        printf("Area do quadrado: %.2f m2", a);

        a = a * 2;

        printf("\nO dobro da area do quadrado: %.2f m2",a);
return(0);
}