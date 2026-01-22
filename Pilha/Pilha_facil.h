#ifndef PILHA_FACIL_H
#define PILHA_FACIL_H

#define MAX 10

typedef struct {
    int itens[MAX];
    int topo;
} Pilha;

void iniciaPilha(Pilha *p);

bool push(Pilha *p, int n);

bool pop(Pilha *p);

#endif