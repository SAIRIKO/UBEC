/*Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou
se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem,
escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou
“Eixo Y”, conforme for a situação. */

#include <stdio.h>

int main(){
    float x,y;

    printf("Calculadora de Quadrante\n");
    printf("------------------------");

    printf("Digite as coordenadas e lhe daremos o quadrante que se enquadra\n\nValor de X: ");
        scanf("%f",&x);
    printf("\nValor de Y: ");
        scanf("%f",&y);

    if (x==0&&y!=0) // Eixo y
    {
        printf("Eixo Y");
    }
    if (x==0&&y==0) // Origem
    {
        printf("Origem");
    }

    if (x>0) //Q1 e Q4
    {
        if (y>0)
        {
            printf("\nQ1"); //Q1
        }
        else if(y<0)
        {
            printf("\nQ4"); //Q4
        }
        else{
            printf("Eixo X"); //Eixo X
        }
    }
    if (x<0) //Q2 e Q3
    {
        if (y>0)
        {
            printf("\nQ2"); //Q2
        }
        else if(y<0)
        {
            printf("\nQ3"); //Q3
        }
        else{
            printf("Eixo X"); //Eixo X
        }
    }
    printf("\n-----------------------------");
    printf("\nDireitos reservados UBEC 2023");
return 0;
}