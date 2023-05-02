/*Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000
que são múltiplos de 3 ou 5.*/

#include <stdio.h>

int main(){
    int soma=0,i;

    printf("Multiplos de 3 ou 5 ate 1.000\n");
    printf("-----------------------------\n");
    
    for(i=1;i<1000;i++) {
        if(i%3==0||i%5==0) {
            soma+=i;
        }
    }
    printf("A soma dos numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 eh: %d", soma);

    printf("\n-----------------------------");
    printf("\nDireitos reservados UBEC 2023");
return 0;
}
