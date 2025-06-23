#include<stdio.h>

int main (void){
    int numero_prato,sobremesas,bebidas;
    int total_calorico = 0;


    printf(" \n --> pratos disponiveis \n");
    printf("\n -------------------//----------------------\n");
     printf(" \n 1 para vegetariano(180 calorias) \n");
     printf(" \n 2 para peixe(230 calorias) \n");
     printf(" \n 3 para frango(250 calorias) \n");
     printf(" \n 4 para carne(350 calorias) \n");
     printf(" \n --> escolha seu prato: \n");

    scanf("%i", &numero_prato);
    
    switch (numero_prato){

    case 1: total_calorico += 180;
    break;
    case 2: total_calorico += 230;
    break;
    case 3: total_calorico += 250;
    break;
    case 4: total_calorico += 350;
    break;
      
    default: 
    printf("\n Opcao de prato Invalida! por favor escolher algum prato do cardapio. \n");
        return 1;
    }

    printf("\n -------------------//----------------------\n");

    printf(" \n sobremesas disponiveis");
     printf(" \n 1 para abacaxi(75 calorias) \n");
     printf(" \n 2 para sorvete diet(110 calorias) \n");
     printf(" \n 3 para mousse diet(170 calorias) \n");
     printf(" \n 4 para mousse de chocolate(200 calorias) \n");
     printf(" \n --> escolha sua sobremesa : \n");
    scanf("%i", &sobremesas);

    switch (sobremesas){

    case 1: total_calorico += 75;
    break;
    case 2: total_calorico += 110;
    break;
    case 3: total_calorico += 170;
    break;
    case 4: total_calorico += 200;
    break;
      
    default: 
    printf("\n Opcao de sobremesa Invalida! por favor escolher alguma outra sobremesa do cardapio. \n");
        return 1;
    }
        

    printf("\n -------------------//----------------------\n");

    printf("\n bebidas disponiveis: \n");
     printf(" \n 1 para cha (30 calorias)\n");
     printf(" \n 2 para suco de laranja(70 calorias)  \n");
     printf(" \n 3 para suco de melao(100 calorias)  \n");
     printf(" \n 4 para refrigerante diet(65 calorias) \n");
     printf(" \n --> escolha sua bebida : \n");
    scanf("%i", &bebidas);

    switch (bebidas)
    {
    case 1: total_calorico += 30;
    break;
    case 2: total_calorico += 70;
    break;
    case 3: total_calorico += 100;
    break;
    case 4: total_calorico += 65;
    break;
      
    default: 
    printf("\n Opcao de bebida Invalida! por favor escolher alguma bebida do cardapio. \n");
        return 1;
    }
        
   
    printf("\n -------------------//----------------------\n");

   

    printf(" \n -->> O total calorico da sua refeicao e : %i calorias\n", total_calorico);

    return 0;

} 