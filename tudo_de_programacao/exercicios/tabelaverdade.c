#include <stdio.h>

#define v 1  // verdadeiro lógico 
#define f 0 // falso lógico 

int main (void) {
    printf("*** TABELA VERDADE AND *** ");
    printf("\n a b | a && b ");
    printf("\n --------------- ");
    printf("\n %i % i | %i" , f, f, f && f );
    printf("\n %i % i | %i" , f, v, f && v );
    printf("\n %i % i | %i" , v, f, v && f );
    printf("\n %i % i | %i" , v, v, v && f );
    printf("\n --------------");
    
    printf("\n\n * NOT(0): %i", ! 0);
    printf("\n * NOT(-5): %i", ! -5 );



    return 0;
}