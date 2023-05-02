/*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade*/

#include <stdio.h>

int main(){
    int num,escolha;
    float carrinho=0;

    printf("Mercado de frutas\n");
    printf("-----------------\n");

    printf("1 => ABACAXI - 5,00 a unidade\n2 => MACA - 1,00 a unidade\n3 => PERA - 4,00 a unidade");
    printf("\n\nDigite o numero do produto desejado: ");
        scanf("%d",&num);

    switch (num)
    {
    case 1: carrinho=carrinho+5;
        break;
    case 2: carrinho=carrinho+1;
        break;
    case 3: carrinho=carrinho+4;
        break;
    default:
        printf("numero invalido");
        break;
    }

    printf("\nDeseja continuar ?\n1)- Sim    2)- Nao\n");
    printf("Sua escolha: ");
        scanf("%d",&escolha);

    while (escolha==1)
    {
        printf("\n1 => ABACAXI - 5,00 a unidade\n2 => MACA - 1,00 a unidade\n3 => PERA - 4,00 a unidade");
        printf("\nDigite o numero do produto desejado: ");
        scanf("%d",&num);
        
        switch (num)
        {
        case 1: carrinho=carrinho+5;
            break;
        case 2: carrinho=carrinho+1;
            break;
        case 3: carrinho=carrinho+4;
            break;
        default:
            printf("numero invalido");
            break;
        }

        printf("\nDeseja continuar ?\n1)- Sim    2)- Nao\n");
        printf("Sua escolha: ");
            scanf("%d",&escolha);
    }

    printf("O seu carrinho deu no total: %.2f",carrinho);
    

    printf("\n-----------------------------");
    printf("\nDireitos reservados UBEC 2023");
return 0;
}