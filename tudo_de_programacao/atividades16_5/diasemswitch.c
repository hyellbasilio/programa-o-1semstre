#include <stdio.h>
int main (void){
    int dia_semana;

    printf("-> digite um dia da semana : ");
    scanf("%i", &dia_semana);
    
    switch(dia_semana){
        case 1: 
            printf("\n -->domingo! \n");
            break;
             
        case 2: 
            printf("\n -->segunda-feira ! \n");
            break;

         case 3: 
            printf("\n -->terca-feira ! \n");
            break;
        
         case 4: 
            printf("\n -->quarta-feira ! \n");
            break;
        
         case 5: 
            printf("\n -->quinta-feira ! \n");
            break;

         case 6: 
            printf("\n -->sexta-feira ! \n");
            break;
             
         case 7: 
            printf("\n -->sabado ! \n ");
            break;
        default: 
            printf(" \n -->nao e um dia da semana ! \n");


    }
    
         

    return 0;
}