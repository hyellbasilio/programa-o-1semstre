#include <stdio.h>
int main (void){
    int dia_semana;

    printf("-> digite um dia da semana : ");
    scanf("%i", &dia_semana);
    
    if(dia_semana == 1){
        printf("\n domingo !");

    }else if (dia_semana == 2){
        printf("\n segunda !")

    }else if (dia_semana == 3){
        printf("\n terca !")

    }else if (dia_semana == 4){
        printf("\n quarta !")

    }else if (dia_semana == 5){
        printf("\n quinta !")

    }else if (dia_semana == 6){
        printf("\n sexta !")

    }else if (dia_semana == 7){
        printf("\n sabado !")
    }



    return 0;
}