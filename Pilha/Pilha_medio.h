#ifndef PILHA_FACIL_H
#define PILHA_FACIL_H

#include <stdbool.h>

#define MAX 10

typedef struct {
    char itens[MAX];
    int topo;
} Pilha;

// Protótipos das funções
void iniciaPilha(Pilha *p);
bool push(Pilha *p, char n);
char pop(Pilha *p);

#endif