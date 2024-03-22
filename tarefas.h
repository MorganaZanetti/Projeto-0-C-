#define TOTAL 100
typedef struct Tarefa{
  int prioridade;
  char categoria[100];
  char descricao[300];
}Tarefa;
typedef enum Erro {
OK, ABRIR, FECHAR, LER, ESCREVER, MAXTAREFAS, SEM_TAREFAS, NAO_ENCONTRADO
}Erro;

Erro criar (Tarefa t[], int *pos);
Erro deletar (Tarefa t[], int *pos);
Erro listar (Tarefa t[], int pos);
Erro salvar (Tarefa t[], int pos, int tamanho);
Erro carregar (Tarefa t[], int pos, int tamanho);

void printTarefa(Tarefa t);
void clearBuffer();
