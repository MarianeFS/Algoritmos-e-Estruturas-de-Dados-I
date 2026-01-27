

#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

void criaLista (Lista *l) {
    l->inicio = 0;
    l->tam = 0;
}

void insereInicio (Lista *l, int n) {
    No *novo = (No*) malloc(sizeof(No));
    if(novo) {
        novo->dados = n;
        novo->prox = l->inicio;
        l->inicio = novo;
        l->tam++;
    }
}

void insereFim (Lista *l, int n) {
    No *aux;
    No *novo = (No*) malloc(sizeof(No));
    if(novo) {
        novo->dados = n;
        novo->prox = NULL;
        if (l->inicio == NULL) {
            l->inicio = novo;
        } else {
            aux = l->inicio;
            while(aux->prox != NULL) {
                aux = aux->prox;
            }
            aux->prox = novo;
        }
        l->tam++;
    }
}

void insereMeio (Lista *l, int n, int pivo) {
    No *aux = l->inicio, *novo;
    while(aux != NULL && aux->dados != pivo) {
        aux = aux->prox;
    }
    if (aux) {
        novo = (No*) malloc (sizeof(No));
        novo->dados = n;
        novo->prox = aux->prox;
        aux->prox = novo;
        l->tam++;
    }
}

void imprimir(Lista *l) {
    No *aux = l->inicio;
    printf("Lista (tam %d): ", l->tam);
    while(aux) {
        printf("%d -> ", aux->dados);
        aux = aux->prox;
    }
    printf("NULL\n");
}

void destruirLista(Lista *l) {
    No *atual = l->inicio;
    while (atual != NULL) {
        No *proximo = atual->prox; // Salva o endereço do próximo antes de apagar o atual
        free(atual);               // Libera a memória do nó atual
        atual = proximo;           // Vai para o próximo
    }
    l->inicio = NULL;
    l->tam = 0;
    printf("Memória liberada com sucesso!\n");
}

int main () {
    Lista l;

    criaLista(&l);

    insereInicio(&l, 10);

    insereFim(&l, 30);

    insereMeio(&l, 20, 10);

    insereInicio(&l, 5);

    imprimir(&l);

    destruirLista(&l);

    return 0;
}