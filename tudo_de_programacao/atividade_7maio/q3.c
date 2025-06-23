#include <stdio.h>

int main (void){
    int a, b;

    printf(" * digite o primeiro numero: ");
    scanf("%i", &a);
    
    printf(" * digite o segundo numero: ");
    scanf("%i", &b);

    if (a > b){
        int  aux ;
        aux = a;
        a = b;
        b = aux;
    }
    printf(" valores digitados : %i %i", a, b);

    return 0;
}