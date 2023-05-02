#include <stdio.h>
#define maxAlunos 25
#define mediaAlunos 6.9

int main(){
    int alunos,i=0,aprovados=0,reprovados=0;
    float media,menorNota,maiorNota,aux=0,mediaTotal;

    printf("------------------\nRelatorio da turma\n------------------");

    printf("\nDigite a quantidade de alunos: ");
        scanf("%d",&alunos);
	
    if (alunos<1||alunos>maxAlunos)
    {
        printf("Numero invalido");
            main();
    }
    else
    {
        printf("Digite as medias dos alunos");

        for (i=0; i<alunos; i++)
        {
            printf("\nAluno %d: ",i+1);
                scanf("%f",&media);
                    mediaTotal+=media;
                    	aux=media;

            if (media < mediaAlunos)
            {
                reprovados++;
            }
            else
			{
                aprovados++;
            }
            if(media>maiorNota)
			{
            	maiorNota=media;
			}
			menorNota=media;
			if(media<menorNota)
			{
            	menorNota=media;
			}
        }    
    }
    printf("A media da turma foi: %.2f",mediaTotal/alunos);
    printf("\nA maior nota informada: %.2f",maiorNota);
    printf("\nA menor nota informada: %.2f",menorNota);
    printf("\nQuantidade de alunos aprovados: %d\n",aprovados);
    printf("\nQuantidade de alunos reprovados: %d\n", reprovados);
    
    

    printf("------------------\nBSB - 2023");
return 0;
}