#include <stdio.h>
int main(void){
    double nota1, nota2, nota3;

    printf("-> digite a nota 1:");
    scanf("%lf", &nota1);
    
    printf("-> digite a nota 2:");
    scanf("%lf", &nota2);

    printf("-> digite a nota 3:");
    scanf("%lf", &nota3);
    
    
    double media = (nota1 + nota2 + nota3 ) /3;

 

    return 0;
}