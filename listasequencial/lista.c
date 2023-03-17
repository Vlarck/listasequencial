#include "lista.h"
#include <stdio.h>

void criarLista(lista *lst){
    lst->tam = 0;
}

int listaVazia(lista *lst){
    return lst->tam == 0;
}

int listaCheia(lista *lst){
    return lst->tam == MAX;
}

int tamanhoLista(lista *lst){
    return lst->tam;
}

int obterElemento(lista *lst, int pos){
    return lst->elementos[pos-1];
}

void modificarElemento(lista *lst, int pos, int valor){
    lst->elementos[pos-1] = valor;
}

void inserirElemento(lista *lst, int pos, int valor){
    if (listaCheia(lst)){
        printf("Lista cheia\n");
        return;
    }else if (pos < 1 || pos > lst->tam+1){
        printf("Posicao invalida\n");
        return;
    }else{
        for (int i = lst->tam-1; i > pos-1; i--) {
            lst->elementos[i] = lst->elementos[i-1];
        }
        lst->elementos[pos-1] = valor;
        lst->tam++;
        printf("Elemento inserido.\n");
    }
}

void retirarElemento(lista *lst, int pos){
    if (listaVazia(lst)){
        printf("Lista vazia\n");
    }else if (pos < 1 || pos >= lst->tam){
        printf("Posicao invalida\n");
    }else{
        for (int i = pos; i < lst->tam-1; i++){
            lst->elementos[i] = lst->elementos[i+1];
        }
        lst->tam--;
    }
}

void imprimirLista(lista *lst){
    printf("[ ");
    for (int i = 0; i < lst->tam; i++){
        printf("%d ", lst->elementos[i]);
    }
    printf("]\n");
}
