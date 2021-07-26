#include "../include/pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Imprimindo a Pilha
void imprimir(Pilha *p) {
  printf("\nPilha: \n");

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

int retonarTamanho(Pilha *p, int contador) {
  Pilha *aux = p;
  aux->info = contador;
  contador = 0;

  while (aux != NULL) {
    contador++;
    aux = aux->prox;

    if (contador == 10) {
      printf("\nPilha cheia, empilhe na próxima pilha.\n");
    }
  }

  printf("\nQuantidade de elementos == %d", contador);

  return 0;
}

// Fora do estado
void imprimir2(Pilha2 *q) {
  printf("\nPilha: \n");

  Pilha *aux = q;

  while (aux != NULL) {
    printf("%d ", aux->info);

    aux = aux->prox;
  }
}

Pilha2* push2(Pilha2 *q, int valor) {
  Pilha *aux = (Pilha *)malloc(sizeof(Pilha));

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
    Pilha *aux = q;

    q = aux->prox;

    free(aux);
  }
  else {
    printf("\nPilha vazia");
  }

  return q;
}

int retornarTamanho2(Pilha2 *q, int contador) {
  Pilha *aux = q;
  aux->info = contador;
  contador = 0;

  while (aux != NULL) {
    contador++;
    aux = aux->prox;

    if (contador == 10) {
      printf("\nPilha cheia, empilhe na próxima pilha.\n");
    }
  }

  printf("\nQuantidade de elementos == %d", contador);

  return 0;
}

// Fora do Brasil
void imprimir3(Pilha3 *q);

Pilha3* push3(Pilha3 *q, int valor);

Pilha3* popSuperior3(Pilha3 *q, int cod, int vol);

int retornarTamanho3(Pilha3 *q, int contador);
