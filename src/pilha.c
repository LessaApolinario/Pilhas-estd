#include "../include/pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Imprimindo a Pilha
void imprimir(Pilha *p) {
  printf("\nPilha 1 - Alagoas: \n");

  Pilha *aux = p;

  while (aux != NULL) {
    printf("%d ", aux->info);

    aux = aux->prox;
  }
}

// Inserindo elemento
Pilha* push(Pilha *p, int valor) {
  Pilha *aux = (Pilha *)malloc(sizeof(Pilha));

  if (aux == NULL) {
    printf("\nPilha vazia");

    return aux;
  }
  else {
    aux->info = valor;
    aux->prox = p;

    printf("\nElemento adicionado!");

    return aux;
  }
}

// Removendo elemento
Pilha* popSuperior(Pilha *p, int cod, int vol) {
  if (p != NULL) {
    Pilha *aux = p;

    p = aux->prox;

    free(aux);
  }
  else {
    printf("\nPilha vazia");
  }

  return p;
}

int retornarTamanho(Pilha *p, int contador) {
  Pilha *aux = p;
  aux->info = contador;
  contador = 0;

  while (aux != NULL) {
    contador++;
    aux = aux->prox;

    if (contador == 10) {
      printf("\nPilha cheia, empilhe na próxima pilha\n");
      break;
    }
  }

  printf("\nQuantidade de elementos == %d", contador);

  return 0;
}

// Fora do estado - pilha 2
void imprimir2(Pilha2 *q) {
  printf("\nPilha 2 - (outros estados): \n");

  Pilha2 *aux = q;

  while (aux != NULL) {
    printf("%d ", aux->info);

    aux = aux->prox;
  }
}

Pilha2* push2(Pilha2 *q, int valor) {
  Pilha2 *aux = (Pilha2 *)malloc(sizeof(Pilha2));

  if (aux == NULL) {
    printf("\nPilha vazia");

    return aux;
  }
  else {
    aux->info = valor;
    aux->prox = q;

    printf("\nElemento adicionado!");

    return aux;
  }
}

Pilha2* popSuperior2(Pilha2 *q, int cod, int vol) {
  if (q != NULL) {
    Pilha2 *aux = q;
    q = aux->prox;

    free(aux);
  }
  else {
    printf("\nPilha vazia");
  }

  return q;
}

int retornarTamanho2(Pilha2 *q, int contador) {
  Pilha2 *aux = q;

  aux->info = contador;
  contador = 0;

  while (aux != NULL) {
    contador++;
    aux = aux->prox;

    if (contador == 10) {
      printf("\nPilha cheia, empilhe na próxima pilha\n");
      break;
    }
  }

  printf("\nQuantidade de elementos == %d\n", contador);

  return 0;
}

// Fora do Brasil - pilha 3
void imprimir3(Pilha3 *r) {
  printf("\nPilha 3 - (fora do Brasil): \n");

  Pilha3 *aux = r;

  while (aux != NULL) {
    printf("%d ", aux->info);

    aux = aux->prox;
  }
}

Pilha3* push3(Pilha3 *r, int valor) {
  Pilha3 *aux = (Pilha3 *)malloc(sizeof(Pilha3));

  if (aux == NULL) {
    printf("\nPilha vazia");

    return aux;
  }
  else {
    aux->info = valor;
    aux->prox = r;

    printf("\nElemento adicionado!");

    return aux;
  }
}

Pilha3* popSuperior3(Pilha3 *r, int cod, int vol) {
  if (r != NULL) {
    Pilha3 *aux = r;

    r = aux->prox;

    free(aux);
  }
  else {
    printf("\nPilha vazia");
  }

  return r;
}

int retornarTamanho3(Pilha3 *r, int contador) {
  Pilha3 *aux = r;
  aux->info = contador;
  contador = 0;

  while (aux != NULL) {
    contador++;
    aux = aux->prox;

    if (contador == 10) {
      printf("\nPilha cheia, empilhe na próxima pilha\n");
      break;
    }
  }

  printf("\nQuantidade de elementos == %d\n", contador);

  return 0;
}
