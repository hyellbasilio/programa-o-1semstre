#include<stdio.h>

int main (void){
    double num1,num2;
    char operador;

    printf(" \n digite um numero: ");
    scanf("%lf", num1);

    fflush(stdin)

    printf(" \n digite o operador:  ");
    scanf("%c", operador);

    printf(" \n digite outro numero: ");
    scanf("%lf", num2);

    switch( operador){
        case '+':
        printf("\n  resultado: %lf ",num1 + num2);
            break;   
        
        case '-':
        printf("\n  resultado: %lf ",num1 + num2);
            break;

        case '*':
        printf("\n  resultado: %lf ",num1 + num2);
            break;

        case '/':
        if(num2 == 0 ) {
           printf("\n  nao existe divisao por 0"); 
        }else{
            
        printf("\n  resultado: %lf ",num1 + num2);}
            break;

        default:
        printf("ERRO: operador invalido");

    }

    
    return 0
}