#ifndef LISTA_H
#define LISTA_H

typedef struct No {
    int dados;
    struct No *prox;
} No;

typedef struct {
    No *inicio;  // Ponteiro para o primeiro elemento
    int tam;     // Opcional: guarda o tamanho atual para não precisar contar sempre
} Lista;

void criaLista (Lista *l);

void insereInicio (Lista *l, int n);

void insereFim (Lista *l, int n);

void insereMeio (Lista *l, int n, int pivo);

void imprimir(Lista *l);

#endif