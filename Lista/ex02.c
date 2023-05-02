/* Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
após a vírgula, segundo a fórmula:*/

#include <stdio.h>
#include <math.h>

int main(){
    float x1,x2,y1,y2,resultado;
    
    printf("Calculadora de Cordernadas\n");
    printf("------------------------");

    printf("Aqui voce sabera a distancia entre dois pontos em uma coordernada");

    printf("\n\nDigite o valor do primeiro ponto (P1)\nX1: ");
        scanf("%f",&x1);
    printf("\nX2: ");
        scanf("%f",&x2);

    printf("\n\nAgora digite o valor do segundo ponto (P2)\nY1: ");
        scanf("%f",&y1);
    printf("\nY2: ");
        scanf("%f",&y2);

    resultado= sqrt((pow((x1-x2),2)+pow((y1-y2),2)));

    printf("\nA distancia entre os pontos eh: %.4f",resultado);

    printf("\n-----------------------------");
    printf("\nDireitos reservados UBEC 2023");
return 0;
}
