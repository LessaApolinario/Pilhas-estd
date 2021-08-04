#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int codigo, volume, opt;
  int precoAL = 0, precoES = 0, precoFora = 0;
  int u, t;
  int w;
  int n, b;
  int saiu, entrou;

  // Pilha Alagoas
  Pilha *al;

  al = (Pilha *)malloc(sizeof(Pilha));

  inicializar(al, 10);

  // Pilha fora do estado
  Pilha *outros;

  outros = (Pilha *)malloc(sizeof(Pilha));

  inicializar(outros, 10);

  // Pilha fora do Brasil
  Pilha *fora;

  fora = (Pilha *)malloc(sizeof(Pilha));

  inicializar(fora, 10);

  // Pilha com o valores desempilhados
  Pilha *auxiliar;

  auxiliar = (Pilha *)malloc(sizeof(Pilha));

  inicializar(auxiliar, 10);

  do {
    printf("\n\n------Deposito Centro Arapiraca------\n");
    printf("\n[1] - Adicionar na pilha de pacotes de Alagoas");
    printf("\n[2] - Adicionar na pilha de pacotes de Outros Estados");
    printf("\n[3] - Adicionar na pilha de pacotes de fora do Brasil");
    printf("\n[4] - Mostrar o estoque de Alagoas");
    printf("\n[5] - Mostrar o estoque de Outros Estados");
    printf("\n[6] - Mostrar o estoque de fora do Brasil");
    printf("\n[7] - Retirada de um pacote da prateleira Alagoas");
    printf("\n[8] - Retirada de um pacote da prateleira Outros Estados");
    printf("\n[9] - Retirada de um pacote da prateleira fora do Brasil");
    printf("\n[0] - SAIR");
    printf("\n--------------------------------------\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &opt);

    switch (opt) {
      case 1:
        printf("Digite o código: ");
        scanf("%i", &codigo);
        printf("Digite o volume: ");
        scanf("%i", &volume);

        push(al, codigo, volume);

        if (al->topo < al->limite - 1) {
          printf("\nTem espaco para mais pacotes");

          al->entrou[al->topo]++;
        } else {
          printf("\nNao tem mais espaco");
        }
        break;
      case 2:
        printf("Digite o código: ");
        scanf("%i", &codigo);
        printf("Digite o volume: ");
        scanf("%i", &volume);
        push(outros, codigo, volume);

        if (outros->topo < outros->limite - 1) {
          printf("\nTem espaço para mais pacotes");

          outros->entrou[outros->topo]++;
        } else {
          printf("\nNão tem mais espaço");
        }

        break;
      case 3:
        printf("Digite o código: ");
        scanf("%i", &codigo);
        printf("Digite o volume: ");
        scanf("%i", &volume);

        push(fora, codigo, volume);
        if (fora->topo < fora->limite - 1) {
          printf("\nTem espaço para mais pacotes");

          fora->entrou[fora->topo]++;
        } else {
          printf("\nNão tem mais espaço");
        }

        break;
      case 4:
        printf("\nItens comprados em lojas de Alagoas:");

        imprimir(al);
        break;
      case 5:
        printf("\nItens comprados em lojas de outros estados:");

        imprimir(outros);
        break;
      case 6:
        printf("\nItens comprados em lojas fora do Brasil:");

        imprimir(fora);
        break;
      case 7:
        printf("Digite o codigo do pacote que deseja retirar: ");
        scanf("%i", &codigo);

        while (codigo != al->codigo[al->topo]) {
          u = al->codigo[al->topo];
          t = al->volume[al->topo];
          al->saiu[al->topo]++;

          printf("Codigo: %d , Saiu: %d vez(vezes)", al->codigo[al->topo], al->saiu[al->topo]);

          push(auxiliar, u, t);
          pop(al);
        }

        if (codigo == al->codigo[al->topo]) {
          precoES = 1 * al->volume[al->topo];

          printf("\n--------------------------------------\n");
          printf("Pode retirar o pacote com o código = %d\n", codigo);
          printf("Preço pelo pacote = R$ %d", precoES);
          printf("\n--------------------------------------\n");

          al->saiu[al->topo]++;

          printf("Codigo: %d , Saiu: %d vez(vezes)", al->codigo[al->topo], al->saiu[al->topo]);

          pop(al);
        }

        for (w = 0; w < auxiliar->codigo[auxiliar->topo]; w++) {
          n = auxiliar->codigo[auxiliar->topo];
          b = auxiliar->volume[auxiliar->topo];

          push(al, n, b);

          al->entrou[al->topo]++;

          printf("\nCodigo: %d, Entrou: %d", al->codigo[al->topo], al->entrou[al->topo]);

          pop(auxiliar);
        }

        break;
      case 8:
        printf("Digite o codigo do pacote que deseja retirar: ");
        scanf("%i", &codigo);

        while (codigo != outros->codigo[outros->topo]) {
          u = outros->codigo[outros->topo];
          t = outros->volume[outros->topo];

          outros->saiu[outros->topo]++;

          printf("Codigo: %d , Saiu: %d vez(vezes)", outros->codigo[outros->topo], outros->saiu[outros->topo]);

          push(auxiliar, u, t);
          pop(outros);
        }

        if (codigo == outros->codigo[outros->topo]) {
          precoES = 3 * outros->volume[outros->topo];

          printf("\n--------------------------------------\n");
          printf("Pode retirar o pacote com o código = %d\n", codigo);
          printf("Preço pelo pacote = R$ %d", precoES);
          printf("\n--------------------------------------\n");

          outros->saiu[outros->topo]++;

          printf("Codigo: %d , Saiu: %d vez(vezes)", outros->codigo[outros->topo], outros->saiu[outros->topo]);

          pop(outros);
        }

        for (w = 0; w < auxiliar->codigo[auxiliar->topo]; w++) {
          n = auxiliar->codigo[auxiliar->topo];
          b = auxiliar->volume[auxiliar->topo];

          push(outros, n, b);

          outros->entrou[outros->topo]++;

          printf("\nCodigo: %d, Entrou: %d", outros->codigo[outros->topo], outros->entrou[outros->topo]);

          pop(auxiliar);
        }
        break;
      case 9:
        printf("Digite o codigo do pacote que deseja retirar: ");
        scanf("%i", &codigo);

        while (codigo != fora->codigo[fora->topo]) {
          u = fora->codigo[fora->topo];
          t = fora->volume[fora->topo];
          fora->saiu[fora->topo]++;

          printf("Codigo: %d , Saiu: %d vez(vezes)", fora->codigo[fora->topo], fora->saiu[fora->topo]);

          push(auxiliar, u, t);
          pop(fora);
        }

        if (codigo == fora->codigo[fora->topo]) {
          precoFora = 6 * fora->volume[fora->topo];

          printf("\n--------------------------------------\n");
          printf("Pode retirar o pacote com o código = %d\n", codigo);
          printf("Preço pelo pacote = R$ %d", precoFora);
          printf("\n--------------------------------------\n");

          fora->saiu[fora->topo]++;

          printf("Codigo: %d , Saiu: %d vez(vezes)", fora->codigo[fora->topo], fora->saiu[fora->topo]);

          pop(fora);
        }

        for (w = 0; w < auxiliar->codigo[auxiliar->topo]; w++) {
          n = auxiliar->codigo[auxiliar->topo];
          b = auxiliar->volume[auxiliar->topo];

          push(fora, n, b);

          fora->entrou[fora->topo]++;

          printf("\nCodigo: %d, Entrou: %d", fora->codigo[fora->topo], fora->entrou[fora->topo]);

          pop(auxiliar);
        }
        break;
      case 10:
        imprimir(auxiliar);
        break;
      case 0:
        printf("\nOperações finalizadas.\n");
        break;
      default:
        printf("\nCóodigo Invalido\n");
        break;
    }
  } while (opt != 0);

  return 0;
}
