#include <stdio.h>;
#include <string.h>

void ImprimirSaudacao()
{
    char nome[30];
    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);
    printf("Olá,  %s", nome);
}


int main (void){

   ImprimirSaudacao();
    

    return 0;
}