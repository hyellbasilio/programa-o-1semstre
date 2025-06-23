#include <stdio.h>

int main(void){
    float nota1, nota2, nota3;
    float media; 

    printf("\n  digite a primeira nota: \n");
    scanf ("%f", &nota1);

    printf ("\n digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf("\n digite a terceira nota: \n");
    scanf ("%i", &nota3);

    media = (2*nota1 + 3*nota2 + 5*nota3 /10);

    printf(" \n a media do aluno e: %.2f", media);

    if (media >= 70){
        printf("\n aluno aprovado!\n "); 

    } else if (media < 40 ){
        printf ("  aluno reprovado ! 7 \n");


    } else {
       
         printf(" \n aluno ira para prova final\n");

         // pra calcular a media final do aluno   
        float media_final;
        float nota_final;

        media_final = (3*media + 2*nota_final /5 );
         if ( media >= 60 ){
        printf ("aluno aprovado"); 
         }else {
            printf("aluno reprovado");
         }

       
    }


    return 0;
}