// um programa que faça a inscrição de um usuario em um sorteio, o usuario prescisa digitar o nome a o numero de telefone,
// e ao submeter o cadastro feito deve se exibir uma mensagem na tela.

#include <stdio.h>

int main (void){
    int num_contato[20];
    char nome_usuario;

    printf("\n Digite seu nome:");
    scanf("%s", &nome_usuario);

    printf("\n Digite seu numero de telefone:");
    scanf("%i", &num_contato);

    printf(" Ola %s, sua iscricao foi realizda com sucesso! caso voce seja sorteado(a), entraremos em contato com seu numero:%i");



    return 0;
}