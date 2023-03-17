#include <stdio.h>
#include "lista.h"

int main() {
    lista lst;
    int opcao, pos, valor;
    criarLista(&lst);

    do {
        printf("1. Verificar se a lista esta vazia\n");
        printf("2. Verificar se a lista esta cheia\n");
        printf("3. Obter o tamanho da lista\n");
        printf("4. Obter/modificar o valor de um elemento\n");
        printf("5. Inserir um elemento em uma determinada posicao\n");
        printf("6. Retirar um elemento de uma determinada posicao\n");
        printf("7. Imprimir lista\n");
        printf("0. Sair\n");
        printf("Opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Saindo\n");
                break;

            case 1:
                if (listaVazia(&lst)) {
                    printf("Lista esta vazia\n");
                } else {
                    printf("Lista nao esta vazia\n");
                }
                break;

            case 2:
                if (listaCheia(&lst)) {
                    printf("Lista esta cheia\n");
                } else {
                    printf("Lista nao esta cheia\n");
                }
                break;

            case 3:
                printf("O tamanho da lista e: %d\n", tamanhoLista(&lst));
                break;

            case 4:
                printf("Posicao do elemento: ");
                scanf("%d", &pos);
                if (pos < 1 || pos >= lst.tam) {
                    printf("Posicao invalida\n");
                } else {
                    printf("Valor do elemento na posicao %d e: %d\n", pos, obterElemento(&lst, pos));
                    printf("Novo valor do elemento: ");
                    scanf("%d", &valor);
                    modificarElemento(&lst, pos, valor);
                    printf("O novo valor do elemento na posicao %d e: %d\n", pos, obterElemento(&lst, pos));
                }
                break;

            case 5:
                printf("Posicao onde elemento sera inserido: ");
                scanf("%d", &pos);
                printf("Valor do elemento: ");
                scanf("%d", &valor);
                inserirElemento(&lst, pos, valor);
                break;

            case 6:
                printf("Posicao do elemento a ser retirado: ");
                scanf("%d", &pos);
                retirarElemento(&lst, pos);
                printf("Elemento retirado.\n");
                break;

            case 7:
                imprimirLista(&lst);
                break;

            default:
                printf("Opcao invalida\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
