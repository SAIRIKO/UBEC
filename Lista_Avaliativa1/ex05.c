/* Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo:
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

#include <stdio.h>

int main(){

    int num,i;

    printf("Divisores\n");
    printf("-----------");

    printf("\nDigite um numero positivo: ");
        scanf("%d",&num);

    if (num>0) // Verificando se o número é positivo
    {
        printf("Seus divisores sao:");

        for (i=1;i<=num;i++)
        {

        if (num%i==0)

           printf(" %d,", i);
        }
    }
    else
    {
        printf("Numero devera ser positivo\n");
            main();
    } 

    printf("\n-----------------------------");
    printf("\nDireitos reservados UBEC 2023");
return 0;
}