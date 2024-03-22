#include "tarefas.h"
#include <stdio.h>

Erro criar(Tarefa t[], int *pos){
  if(*pos >= TOTAL)
    return MAXTAREFAS;
  
  printf("Digite a prioridade: ");
  scanf("%d", &t[*pos].prioridade);
  clearBuffer();
  printf("Digite a descrição: ");
  fgets(t[*pos].descricao, 300, stdin);
  clearBuffer();
  printf("Digite a categoria: ");
  fgets(t[*pos].categoria, 100, stdin);
  printTarefa(t[*pos]);
  *pos = *pos + 1;
  return OK;
}
Erro deletar (Tarefa t[], int *pos){
  printf("\nFunção deletar tarefa\n");
  return OK;
}
Erro listar (Tarefa t[], int pos){
  if (pos == 0)
    return SEM_TAREFAS;
  for (int i = 0; i < pos; i++){
    printTarefa(t[i]);
  }
  return OK;
}

Erro salvar (Tarefa t[], int pos, int tamanho){
  printf("\nFunção salvar tarefa\n");
  return OK;
}
Erro carregar (Tarefa t[], int pos, int tamanho){
  printf("\nFunção carregar tarefas\n");
  return OK;
}

void printTarefa(Tarefa t){
  printf("Prioridade: %d \t Categoria: %s\n", t.prioridade, t.categoria);
  printf("Descrição: %s\n", t.descricao);
}
void clearBuffer(){
  int c;
  while((c = getchar()) != '\n' && c != EOF)
    ;
}
