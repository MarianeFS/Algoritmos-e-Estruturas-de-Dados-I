/*
Implemente uma pilha simples usando um vetor estático de inteiros com funções de push e pop
que verifiquem overflow e underflow.
*/

/*
// Pilha dinâmica
typedef struct {
    int *itens;     // Ponteiro para alocação dinâmica
    int topo;       // Quantos itens tem agora
    int capacidade; // Tamanho atual do bloco alocado
} Pilha;
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Pilha_facil.h"

void iniciaPilha(Pilha *p) {
    p->topo = 0;
}
bool push(Pilha *p, int n) {
    if(p->topo == MAX)
        return false;
    p->itens[p->topo] = n;
    p->topo++;
    return true;
}

bool pop(Pilha *p) {
    if(p->topo == 0)
        return false;
    p->topo--;
    return true;
}

int main() {

    Pilha p;
    iniciaPilha(&p);

    push(&p, 50);
    push(&p, 80);

    printf("Números inseridos: \n");
    for (int i = 0; i < p.topo; i++) {
        printf("%d ", p.itens[i]);
    }
    printf("\n");

    printf("Topo atual: %d\n", p.topo);

    pop(&p);

    printf("Topo após pop: %d\n", p.topo);

    return 0;

}