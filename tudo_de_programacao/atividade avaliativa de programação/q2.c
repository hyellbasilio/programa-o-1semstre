//Thiago Tomaz de araujo - 20251134040031
// Emanuel Basilio - 20251134040031

#include<stdio.h>

int main(void){

    char at1[20], at2[20], at3[20];
    int at1minutos, at1segundos, at1centesimos;
    int at2minutos, at2segundos, at2centesimos;
    int at3minutos, at3segundos, at3centesimos;

    //nome do atleta numero 1 
    printf("\n -> digite o nome do atleta: ");
    scanf("%s", &at1);

    //agora o tempo do primeiro atleta 
    printf("\n -> Informe os minutos do atleta :\n ");
    scanf("%i", &at1minutos);
    printf("\n -> Informe os segundos :\n ");
    scanf("%i",&at1segundos);
    printf("\n -> Informe os centesimos :\n ");
    scanf("%i",&at1centesimos);

    //nome do atleta nuemro 2 
    printf("\n -> digite o nome do atleta: ");
    scanf("%s", &at2);

    //agora o tempo do segundo atleta 
    printf("\n -> Informe os minutos do atleta :\n ");
    scanf("%i", &at2minutos);
    printf("\n -> Informe os segundos :\n ");
    scanf("%i",&at2segundos);
    printf("\n -> Informe os centesimos :\n ");
    scanf("%i",&at2centesimos);

    //nome do atleta numero 3
    printf("\n -> digite o nome do atleta: ");
    scanf("%s", &at3);

    //agora o tempo do terceiro atleta 
    printf("\n -> Informe os minutos do atleta :\n ");
    scanf("%i", &at3minutos);
    printf("\n -> Informe os segundos :\n ");
    scanf("%i",&at3segundos);
    printf("\n -> Informe os centesimos :\n ");
    scanf("%i",&at3centesimos);



    return 0;
}