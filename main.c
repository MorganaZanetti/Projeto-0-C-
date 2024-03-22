#include <stdio.h>
#include "tarefas.h"

int main() {
  int opcao;
  Tarefa tarefas[TOTAL];
  int pos = 0;
  Erro e = carregar(tarefas,&pos,TOTAL);
  if(e== ABRIR || e == LER || e == FECHAR){
    pos = 0;
    printf("Erro ao carregar tarefas.\n");
  }
  do{
    printf("\nMenu principal\n");
    printf("1 - Criar tarefa\n");
    printf("2 - Deletar tarefa\n");
    printf("3 - Listar tarefa\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Opção escolhida: %d\n", opcao);
    if (opcao == 1) {
      e = criar(tarefas, &pos);
      if (e == MAXTAREFAS)
        printf("Maximo de tarefas atingido\n");
    } else if (opcao == 2) {
      e = deletar(tarefas, &pos);
      if (e == SEM_TAREFAS)
        printf("Nenhuma tarefa para ser deletada\n");
      else if (e == NAO_ENCONTRADO)
        printf("Tarefa nao encontrada na lista\n");
    } else if (opcao == 3) {
      e = listar(tarefas, pos);
      if (e == SEM_TAREFAS)
        printf("Nao existem tarefas para listar\n");
    } else if (opcao == 0) {
      printf("Sair...\n");''
      e = salvar(tarefas, pos, TOTAL);
      if (e == ABRIR || e == ESCREVER || e == FECHAR)
        printf("Nao foi possivel salvar as tarefas\n");
    } else
      printf("Opcao invalida\n");
  }while(opcao != 0);
}
