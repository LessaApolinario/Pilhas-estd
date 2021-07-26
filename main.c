#include "./include/pilha.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  Pilha *inicio = NULL;
  Pilha2 *inicio2 = NULL;
  Pilha3 *inicio3 = NULL;
  int op;
  int cod, vol;
  int cont = 0;

  do {
    printf("\n| 1 - para inserir da pilha (do estado)\n");
    printf("| 2 - para inerir na pilha (fora do estado)\n");
    printf("| 3 - para inserir na pilha (fora do Brasil)\n");
    printf("| 4 - para consultar as pilhas\n");
    printf("| 0 - para sair\n");
    scanf("%d", &op);

    switch(op) {
      case 1:
        printf("Informe o código: ");
        scanf("%d", &cod);

        inicio = push(inicio, cod);

        retornarTamanho(inicio, cont);
        break;
      case 2:
        printf("Informe o código: ");
        scanf("%d", &cod);

        inicio2 = push2(inicio2, cod);

        retornarTamanho2(inicio2, cont);
        break;
      case 3:
        printf("Informe o código: ");
        scanf("%d", &cod);

        inicio3 = push3(inicio3, cod);

        retornarTamanho3(inicio3, cont);
        break;
      case 4:
        imprimir(inicio);
        imprimir2(inicio2);
        imprimir3(inicio3);
        break;
      case 7:
        printf("Informe o código: ");
        scanf("%d", &cod);

        printf("Informe o volume: ");
        scanf("%d", &vol);

        inicio = popSuperior(inicio, cod, vol);

        printf("\nOrigem: pilha 1\nCódigo: %d\nVolume: %d\n", cod, vol);
        break;
      case 0:
        printf("Fim das operações\n");
        break;
      default:
        if (op != 0) {
          printf("Opção inválida\n");
        }
        break;
    }
  } while(op != 0);

  return 0;
}
