struct pilha {
  int topo;
  int limite;
  int* codigo;
  int* volume;
  int* entrou;
  int* saiu;
};
typedef struct pilha Pilha;

Pilha* inicializar(Pilha *p, int limite);

void imprimir(Pilha *p);

int push(Pilha *p , int valor, int volume);

int pop(Pilha *p);

int estaVazia(Pilha *p);

void imprimirEntrouSaiu(Pilha *p);
