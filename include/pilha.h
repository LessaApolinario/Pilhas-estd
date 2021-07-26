// Alagoas
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

// Alagoas - pilha 1
void imprimir(Pilha *p);

Pilha* push(Pilha *p, int valor);

Pilha* popSuperior(Pilha *p, int cod, int vol);

int retornarTamanho(Pilha *p, int contador);

// Fora do estado - pilha 2
void imprimir2(Pilha2 *q);

Pilha2* push2(Pilha2 *q, int valor);

Pilha2* popSuperior2(Pilha2 *q, int cod, int vol);

int retornarTamanho2(Pilha2 *q, int contador);

// Fora do Brasil - pilha 3
void imprimir3(Pilha3 *r);

Pilha3* push3(Pilha3 *r, int valor);

Pilha3* popSuperior3(Pilha3 *r, int cod, int vol);

int retornarTamanho3(Pilha3 *r, int contador);
