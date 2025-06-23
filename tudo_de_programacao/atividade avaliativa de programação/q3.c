//Thiago Tomaz de araujo - 20251134040031
// Emanuel Basilio - 20251134040031

#include <stdio.h>

#define DOSAGEMMG 500.0

int main(void){
    float peso, dosagem_gotas = 0;
    int idade ;
    const int gotas = 20;

    printf("\n -> Informe o seu peso: ");
    scanf("%f", &peso);

    printf("\n -> Informe a sua idade: ");
    scanf("%i", &idade);

    // 20 gotas = 1ml
    // 500mg por ml = cada 1ml = 500mg
    //125mg = 500 / 4  = 1ml / 4 = 0,25 ml = 5 gotas
    printf("\n ");
    printf("\n -> CALCULANDO A DOSAGEM PARA A IDADE: %f e PESO: %f kg", idade, peso);
    
    
    if(idade > 0 ){
        if(idade < 12){
             // 125 / 500 = 0,25
                // 1ml * 0,25 = 0,25
                //0,25 * 20 = 5 gotas
            printf("\n-> Para crianças e adolescente abaixo de 12 anos");
            if(peso >= 5 && peso <= 9){
                dosagem_gotas = (125.0 / DOSAGEMMG)*gotas;
            }else if(peso >= 9.1 && peso <= 16){
                dosagem_gotas = (250.0 / DOSAGEMMG)*gotas;
            }else if(peso >= 16.1 && peso <= 24){
                dosagem_gotas = (375.0 / DOSAGEMMG)*gotas;
            }else if(peso >= 24.1 && peso <= 30){
                dosagem_gotas = (500.0 / DOSAGEMMG)*gotas;
            }else if(peso > 30){
                dosagem_gotas = (750.0 / DOSAGEMMG)*gotas;
            } else{
                printf("\n-> ERROR, Paciente com peso errado, tente novamente");
                
            }
        }else{
            printf("\n-> Para pacientes a partir dos 12 anos");
            if(peso >= 60){
                dosagem_gotas = (1000.0 / DOSAGEMMG) * gotas;
            }else{
               dosagem_gotas = (875.0 / DOSAGEMMG) * gotas; 
            }

        }
    }else{
        printf("\n-> ERROR, nao existe idade negativa ou igual a zero, tente novamente!");
    }
    
    if(dosagem_gotas != 0){
        printf("\n-> A dosagem em gotas eh: %.2f", dosagem_gotas);
    }
   
     printf("\n ");


    return 0;
}