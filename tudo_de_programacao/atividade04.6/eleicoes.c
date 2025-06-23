#include <stdio.h>

int main(void) {
    int votos_fulano, votos_beltrano, votos_ciclano, votos_branco ;
    int votos;

    do {
        printf("\n\n============= ELEICOES =============");
        printf("\n [10]  >>FULANO<< ");
        printf("\n [20] >>BELTRANO<<");
        printf("\n [30] >>CICLANO<<");
        printf("\n [0] voto em branco");
        printf("\n======================================");
        printf(" \n Digite seu voto: ")
        scanf("%i", &votos);
        

        switch (votos)
        {
            case 10:
                votos_fulano += 1; 
                break;
            case 20:
                votos_beltrano += 1;
                break;  
            case 30:
                votos_ciclano += 1;
                break;
            case 0: 
                votos_branco
                break;                
            default:
                printf("\n ERRO: opcao invalida!");
                break;
        }

    } while (votos >= 0);



    return 0;
}
