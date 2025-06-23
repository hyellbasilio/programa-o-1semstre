#include <stdio.h>

int main (void) {
    int ano;
    
     printf("-> digite um ano ");
     scanf("%i", &ano);

     if (ano % 4 == 0  &&  ano % 100 !=0 ){
        printf("0 ano %i o ano é bissexto ");
        
     } else {
        //ano < 0;
        printf("este ano nao e bissexto");



     }
    
    return 0;
}