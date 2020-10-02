#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    char nome[30];
    float media;
}Aluno;

Aluno PreencherAluno()
{
    Aluno a;

    printf("Digite seu nome: ");
    scanf("%s", a.nome);

    printf("Digite sua nota: ");
    scanf("%f", &a.media);

    return a;  
}

int main (void){

    Aluno aluno = PreencherAluno();

    printf("O aluno %s tem a média %f", aluno.nome, aluno.media);


    return 0;
}