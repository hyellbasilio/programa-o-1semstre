//Thiago Tomaz de araujo - 20251134040031
// Emanuel Basilio - 20251134040031

#include <stdio.h>
#include <math.h>


int main(void){
    double x;

    printf("\n -> Informe um numero: ");
    scanf("%lf", &x);

    double dividendo =  pow(x,2) - 16;
    printf("\n ");
    printf("\n -> Calculando a funcao para  x = %lf ", x);

    printf("\n -> funcao(%lf) = (5 * %lf + 3) / raiz((%lf * %lf) - 16) ",x, x, x,x);
    printf("\n -> funcao(%lf) = (%lf) / raiz(%lf) ",x, (5 * x + 3), dividendo);
    printf("\n ");
    printf("\n -> Resultado: ");
    if(dividendo == 0 ){
        printf("\n-> Nao existe DIVISAO por 0");
    }else if(dividendo < 0){
        printf("\n -> ERROR, nao existe raiz quadrado de numero negativo!");
    }else{
        printf("\n -> O valor da funcao e %.2lf", (5 * x + 3) / sqrt(dividendo));
    }

    printf("\n ");

    return 0;
}