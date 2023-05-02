/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include <stdio.h>

int main(){
    int n,seq=1,seqA=0,aux;	

    printf("Enésimo termo da sequência de Fibonacci\n");
    printf("---------------------------------------\n");

	printf("Qual termo voce deseja ver ? ");
	    scanf("%d", &n);
	        n--;
            n--;

	while (n) {
		aux=seq;
		seq+=seqA;
		seqA=aux;
		n--;
	}
	printf("%d ", seq);
    
    printf("\n-----------------------------");
    printf("\nDireitos reservados UBEC 2023");    
}