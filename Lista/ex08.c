/*Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido*/

#include <stdio.h>

int main(){
    int num,maior,menor;
    
    printf("Maior e o menor\n");
    printf("---------------\n");
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&num);
    
    maior=num;
    menor=num;
    
    while (num>=0) {
        if (num>maior) {
            maior=num;
        }
        if (num<menor) {
            menor=num;
        }
        printf("Digite outro numero: ");
        scanf("%d",&num);
    }
    printf("O maior numero lido foi %d e o menor foi %d\n", maior,menor);
    
    printf("\n-----------------------------");
    printf("\nDireitos reservados UBEC 2023");
return 0;
}
