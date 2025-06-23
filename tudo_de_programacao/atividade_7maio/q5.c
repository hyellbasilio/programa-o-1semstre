#include <stdio.h>


int main (void){
int idade;

    printf(" \n -->digite sua idade : \n");
    scanf("%i", &idade);

    if (idade >= 5 && idade <=7 ) {
        printf ("\n categoria infantil A \n");
    }else if (idade >= 8 && idade <= 10 ){
        printf(" \n categoria infantil B");
    }else if (idade >= 11 && idade <= 13 ){
        printf(" \n categoria juvenil A");
    }else if (idade >= 14 && idade <= 17 ){
        printf(" \n categoria juvenil B");
    }else if (idade >= 18){
        printf(" \n categoria Senior ");
    }else{
        printf(" \n nao ha categoria para sua idade ");
    }

    return 0;
}