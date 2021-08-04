#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

Pilha* inicializar(Pilha *p, int limite) {
  p->topo = -1;
  p->limite = limite;
  p->codigo = (int *)malloc(sizeof(int) * limite);
  p->volume = (int *)malloc(sizeof(int) * limite);
  p->entrou = (int *)malloc(sizeof(int) * limite);
  p->saiu = (int *)malloc(sizeof(int) * limite);

	printf("\nPilha inicializada!\n");

  return p;
}

void imprimir(Pilha *p) {
  printf("\nPilha: ");

	int i;

	for (i = p->topo; i >= 0; i--){
    printf("\nCódigo: %d Volume: %d kg", p->codigo[i], p->volume[i]);
  }

	printf("\n");
}

void imprimirEntrouSaiu(Pilha *p) {
  printf("\nPilha: ");

	int i;

	for (i = p->topo; i >= 0; i--) {
    printf("\nCódigo: %d Volume: %d kg Entrou:%d vez(s) Saiu: %d vez(s)", p->codigo[i], p->volume[i],p->entrou[i], p->saiu[i]);
  }

	printf("\n");
}

int push(Pilha *p, int valor, int volume) {
  if (p->topo < p->limite - 1) {
    p->topo++;
    p->codigo[p->topo] = valor;
    p->volume[p->topo] = volume;

    printf("\nO pacote Chegou!");
  } else {
		printf("\nPilha cheia");
	}

	return 0;
}

int pop(Pilha *p) {
  if (p->topo >= 0) {
    int aux = p->codigo[p->topo];
    int aux2 = p->volume[p->topo];
    p->topo--;

    printf("\nPacote retirado!");
  } else {
    printf("\nPilha vazia!");
  }

	return 0;
}
