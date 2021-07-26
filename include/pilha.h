// Estado
struct pilha {
  int info;
  struct pilha* prox;
};
typedef struct pilha Pilha;

// Fora do estado
struct pilha2 {
  int info;
  struct pilha2* prox;
};
typedef struct pilha2 Pilha2;

// Fora do Brasil
struct pilha3 {
  int info;
  struct pilha3* prox;
};
typedef struct pilha3 Pilha3;

// Estado
void imprimir(Pilha *p);

Pilha* push(Pilha *p, int valor);

Pilha* popSuperior(Pilha *p, int cod, int vol);

int retonarTamanho(Pilha *p, int contador);

// Fora do estado
void imprimir2(Pilha2 *q);

Pilha2* push2(Pilha2 *q, int valor);

Pilha2* popSuperior2(Pilha2 *q, int cod, int vol);

int retornarTamanho2(Pilha2 *q, int contador);

// Fora do Brasil
void imprimir3(Pilha3 *q);

Pilha3* push3(Pilha3 *q, int valor);

Pilha3* popSuperior3(Pilha3 *q, int cod, int vol);

int retornarTamanho3(Pilha3 *q, int contador);
