#ifndef PILHA_FACIL_H
#define PILHA_FACIL_H

typedef struct No {
    int item;
    struct No *prox; // Ele aponta para uma estrutura igual a ele mesma
} No;

typedef struct {
    No *inicio;
    No *final;
    int qtd;
} Fila;

int fila_cheia(Fila *f);

int fila_vazia(Fila *f);

void cria_fila(Fila*);

int insere_fila(Fila *f, int n);

int remove_fila(Fila *f);

void listar_fila(Fila *f);

#endif