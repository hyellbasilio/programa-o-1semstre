#include <stdio.h>
int main (void){
    int meses_do_ano;

    printf("\n -> digite um mes do ano: \n ");
    scanf("%i", &meses_do_ano);
    
    switch(meses_do_ano){
        case 1: 
            printf("\n -->janeiro! \n");
            break;
             
        case 2: 
            printf("\n -->fevereiro! \n");
            break;

         case 3: 
            printf("\n -->marco ! \n");
            break;
        
         case 4: 
            printf("\n -->abril! \n");
            break;
        
         case 5: 
            printf("\n -->maio ! \n");
            break;

         case 6: 
            printf("\n -->junho ! \n");
            break;
             
         case 7: 
            printf("\n -->julho ! \n ");
            break;

         case 8: 
            printf("\n -->agosto ! \n ");
            break;

         case 9: 
            printf("\n -->setembro ! \n ");
            break;

         case 10: 
            printf("\n -->outubro ! \n ");
            break;

         case 11: 
            printf("\n -->novembro ! \n ");
            break;

         case 12: 
            printf("\n -->dezembro  ! \n ");
            break;

        default: 
            printf(" \n -->nao e um mes do ano  ! \n");


    }
    
         

    return 0;
}