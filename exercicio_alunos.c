#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void limpartela(){
  #ifdef _WIN32
    system("cls");
    #else
        system("clear");
    #endif
}

typedef struct
{
  char nome[30];
  int matricula;
  float notas[3];
  float media;

}TAluno;

int main(void) {
  
    limpartela();
  
  TAluno alunos[60];
  int quantidade = 0;


  for(int i = 0; i < 10; i++)
  {

    printf("\t\tALUNO %i", i+1);
    
    printf("\n\nDigite a matrícula: ");
    scanf("%i", &alunos[i].matricula);

    getchar();
    
    if(alunos[i].matricula == 0) break;

    printf("Digite o nome: ");
    fgets(alunos[i].nome, 30, stdin);

      alunos[i].media = 0;
      for(int x = 0; x < 3; x++)
      {
       printf("Digite a nota %i: ", x+1);
       scanf("%f", &alunos[i].notas[x]); 

       alunos[i].media = alunos[i].media + alunos[i].notas[x];
      }
    quantidade++;
    limpartela();
  }

  limpartela();

  int matricula_comp;

  printf("Digite a matrícula que busca: ");
  scanf("%i", &matricula_comp);

  limpartela();
  
  for(int i = 0; i < quantidade; i++)
  {
    if(matricula_comp == alunos[i].matricula)
    {
      printf("\n\t\tALUNO %i", i+1);
    printf("\nNome: %s", alunos[i].nome);
    printf("Matrícula: %i", alunos[i].matricula);
    printf("\nMédia: %f", alunos[i].media / 3);
    printf("\n");
    }
  }
  
  /*
  printf("\n\n===========================");

    printf("\n\t\tALUNO %i", i+1);
    printf("\nNome: %s", alunos[i].nome);
    printf("Matrícula: %i", alunos[i].matricula);
    printf("\nMédia: %f", alunos[i].media / 3);

    // printf("\n\n===========================");
  */
  

  return 0;
}