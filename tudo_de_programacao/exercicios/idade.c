#include <stdio.h>
int main(void){
    int idade; 

    printf("digite sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18){
        printf("* maior de idade ");
    } else{
        
        printf(" *menor de idade  ");

    }

    



    return 0;
}