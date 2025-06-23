#include <stdio.h>

int main(void) {
    int numero_prato, sobremesas, bebidas;
    int total_calorico = 0;

    printf("\n--> Pratos disponíveis\n");
    printf("1 - Vegetariano (180 cal)\n");
    printf("2 - Peixe (230 cal)\n");
    printf("3 - Frango (250 cal)\n");
    printf("4 - Carne (350 cal)\n");
    printf("--> Escolha seu prato: ");
    scanf("%d", &numero_prato);

    switch (numero_prato) {
        case 1: total_calorico += 180; break;
        case 2: total_calorico += 230; break;
        case 3: total_calorico += 250; break;
        case 4: total_calorico += 350; break;
        default: 
            printf("Opção de prato inválida!\n");
            return 1;
    }

    printf("\n--> Sobremesas disponíveis\n");
    printf("1 - Abacaxi (75 cal)\n");
    printf("2 - Sorvete Diet (110 cal)\n");
    printf("3 - Mousse Diet (170 cal)\n");
    printf("4 - Mousse de Chocolate (200 cal)\n");
    printf("--> Escolha sua sobremesa: ");
    scanf("%d", &sobremesas);

    switch (sobremesas) {
        case 1: total_calorico += 75; break;
        case 2: total_calorico += 110; break;
        case 3: total_calorico += 170; break;
        case 4: total_calorico += 200; break;
        default:
            printf("Opção de sobremesa inválida!\n");
            return 1;
    }

    printf("\n--> Bebidas disponíveis\n");
    printf("1 - Chá (30 cal)\n");
    printf("2 - Suco de Laranja (70 cal)\n");
    printf("3 - Suco de Melão (100 cal)\n");
    printf("4 - Refrigerante Diet (65 cal)\n");
    printf("--> Escolha sua bebida: ");
    scanf("%d", &bebidas);

    switch (bebidas) {
        case 1: total_calorico += 30; break;
        case 2: total_calorico += 70; break;
        case 3: total_calorico += 100; break;
        case 4: total_calorico += 65; break;
        default:
            printf("Opção de bebida inválida!\n");
            return 1;
    }

    printf("\n--> O total calórico da sua refeição é: %d calorias\n", total_calorico);

    return 0;
}