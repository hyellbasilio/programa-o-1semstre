#include <stdio.h>
int main (void){
    int dia_semana;

    printf("-> digite um dia da semana : ");
    scanf("%i", &dia_semana);
    
    switch(dia_semana){
        case 5 ... 7: 
            printf("\n -->Categoria Infantil A ! \n");
            break;
             
        case 8 ... 10: 
            printf("\n -->Categoria Infantil B ! \n");
            break;

         case 11 ... 13: 
            printf("\n -->Categoria juvenil A ! \n");
            break;
        
         case 14 ... 17: 
            printf("\n -->Categria Juvenil B ! \n");
            break;
        
         case 18 ... 100: 
            printf("\n -->senior  ! \n");
            break;

        default : 
            printf(" \n -->nao e uma categoria ! \n");

    }
    
         
    return 0;
}