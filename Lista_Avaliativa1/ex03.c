/* Faça um programa que calcule e mostre a área da superfície e o volume de uma esfera
sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R³. A
fórmula para calcular a área é: 4 * pi * R². Considere (atribua) para pi o valor 3.14159. Use o
conceito de constante Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas
linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é
outro inteiro*/

#include <stdio.h>
#include <math.h>

int main(){
    double pi=3.14159, raio, area, volume;

    printf("Calculadora de Area\n");
    printf("------------------------");

    printf("Ola, digite o valor do raio e informaremos a area e o volume\n\nRaio = ");
        scanf("%lf",&raio);

    area = ( (4 * pi) * pow(raio,2) );

    volume = ( ((4.0/3) * pi) * pow(raio,3) );

    printf("A area = %.5lf",area);
    printf("\nO volume eh = %.5lf",volume);

    printf("\n-----------------------------");
    printf("\nDireitos reservados UBEC 2023");
return 0;
}