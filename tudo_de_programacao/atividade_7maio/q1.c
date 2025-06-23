#include<stdio.h>
int main(void){
    float num1,num2;
    float menor,maior;

    printf("\n --> digite o primeiro numero: \n");
    scanf("%f",num1);

    printf("\n --> digite o segundo numero: \n");
    scanf("%f",num2);

    if(num1>num2){
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }
    return 0;
} 