/* Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = (“valor de DIFERENCA”)*/

#include <stdio.h>

int main(){
    int a,b,c,d,resultado;

    printf("Calculadora de Diferenca\n");
    printf("------------------------");

    printf("\nDigite o valor de A: ");
        scanf("%d",&a);

    printf("\nDigite o valor de B: ");
        scanf("%d",&b);
        
    printf("\nDigite o valor de C: ");
        scanf("%d",&c);
        
    printf("\nDigite o valor de D: ");
        scanf("%d",&d);
        
        resultado=(a*b)-(c*d);

    if (resultado<0)
    {
        resultado=resultado*(-1);
        printf("\nDiferenca = (%d * %d - %d * %d)",a,b,c,d);

        printf("\nDiferenca = (%d)",resultado);
    }
    else
    {
        printf("\nDiferenca = (%d * %d - %d * %d)",a,b,c,d);

        resultado=(a*b)-(c*d);
        printf("\nDiferenca = (%d)",resultado);
    }

    printf("\n-----------------------------");
    printf("\nDireitos reservados UBEC 2023");
return 0;
}