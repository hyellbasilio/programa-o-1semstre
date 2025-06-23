#include <stdio.h>
int main (void){
    char nome[30];

    printf("\n digite seu nome ");
    scanf("%s", &nome);
    // quando colocamos []
   scanf("%[^\n]", &nome);
    // 
    printf("nome: %s", nome);
    


    return 0;
}