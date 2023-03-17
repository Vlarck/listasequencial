#ifndef LISTA_SEQUENCIAL_H_INCLUDED
#define LISTA_SEQUENCIAL_H_INCLUDED
#define MAX 100

typedef struct {
    int elementos[MAX];
    int tam;
} lista;
void criarLista(lista *lst);
int listaVazia(lista *lst);
int listaCheia(lista *lst);
int tamanhoLista(lista *lst);
int obterElemento(lista *lst, int pos);
void modificarElemento(lista *lst, int pos, int valor);
void inserirElemento(lista *lst, int pos, int valor);
void retirarElemento(lista *lst, int pos);
void imprimirLista(lista *lst);

#endif 
