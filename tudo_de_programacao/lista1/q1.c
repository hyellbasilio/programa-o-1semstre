#include<stdio.h>

int main(void) {
    int cavalos,ferraduras; 
    const int patas = 4; 

    printf("\n Adicione o numeros de cavalos adiquiridos: ");
    scanf("%i", &cavalos);

    ferraduras = cavalos *  patas;

    printf("\n voce vai prescisar de %i ferraruras ! \n ", ferraduras);


 
    return 0;
}
