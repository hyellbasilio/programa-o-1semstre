#include<stdio.h>

int main (void){
    int idade;

    printf("\n -->digite aqui sua idade: \n");
    scanf("%i", &idade);

    if ( idade < 18 ){
        printf("\n --> menor de idade \n ");

    }else if ( idade >= 18 && idade< 65) {
        printf("\n --> maior de idade \n ");

    }else {
        printf("\n maior de 65 anos! \n");

    }
    return 0 ;
}