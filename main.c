#include <stdio.h>
#include "tarefas.h"

int main() {
  int opcao;
  Tarefa tarefas[TOTAL];
  int pos = 0;
  do{
    printf("\nMenu principal\n");
    printf("1 - Criar tarefa\n");
    printf("2 - Deletar tarefa\n");
    printf("3 - Listar tarefa\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Opção escolhida: %d\n", opcao);
    if (opcao == 1){
      criar(tarefas, &pos);
    }
    else if (opcao == 2){
      deletar(tarefas, &pos);
    }
    else if (opcao == 3){
      listar(tarefas, pos);
    }
    else if (opcao == 0){
      printf("Sair...\n");
    }
    else{
      printf("Opção inválida\n");
    }
  }while(opcao != 0);
}
