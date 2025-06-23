#include<stdio.h>
#include<ctype.h>

int main (void){
    float distancia;
    char tipo_carro;

    printf (" \n--> tipo de caro: \n ");
    scanf("%c", &tipo_carro);


    printf ("\n --> distancia a ser percorrida: \n ");
    scanf("%f", &distancia);
    

    float consumo_litros;

    switch (tipo_carro){
        case 'A' :
        case 'a' :
        consumo_litros = distancia /12;
        break;

        case 'B' : 
        case 'b' :
        
        consumo_litros = distancia /9;
        break;
        
        case 'C' :
        case 'c' : 
        
        consumo_litros = distancia /8;
        break;
        
        default: 
        printf(" #  ERRO: tipo de carro inexistente !");
        return 1 ;
    }

    printf(" * consumo da viagem: %.2f", consumo_litros);


    return 0; 
}