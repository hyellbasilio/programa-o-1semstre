#include<stdio.h>

int main (void){
    int eleitores;
    int n_votos_mais_votados;

    printf("\n --> digite o numero de eleitores aptos: \n");
    scanf("%i", &eleitores);
    
    printf("\n --> numero de votos mais votados : \n");
    scanf("%i", &n_votos_mais_votados);

    if ( eleitores >= 200000){
        //pode ocorrer segundo turno
        float votos_50porc = eleitores * 0.5;

        if( n_votos_mais_votados >= votos_50porc){
            printf("\n --> eleicao encerrada no primeiro turno ! \n");
        } else {
            printf(" \n --> eleicao ira pra o segundo turno! ");
        }
        printf (" \n pode ocorrer segundo turno");
    } else {
        // não há segundo turno 
        printf("\n nao ha segundo turno !");
        printf(" \n numero de eleitores inferior a 20000");
    }
    return 0;
}