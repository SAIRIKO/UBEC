/*Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main(){
    int num[10],i=0,soma=0;

    printf("Media de 10 numros inteiros\n");
    printf("---------------------------\n");

    printf("Digite 10 numeros inteiros\n");

    for (i=0;i<=9; i++) {
        printf("Numero %d: ",i+1); 
            scanf("%d",&num[i]);
            soma+=num[i];
    }
    printf("A media desses numeros eh: %d",soma/10);

    printf("\n-----------------------------");
    printf("\nDireitos reservados UBEC 2023");

return 0;
}