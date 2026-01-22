/*
Utilizando uma pilha, escreva uma função que receba uma string e a inverta (Ex: ”BRASIL” →
”LISARB”).
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Pilha_medio.h"

// Adicione "void"
void iniciaPilha(Pilha *p) {
    p->topo = 0;
}

// Adicione "bool"
bool push(Pilha *p, char n) {
    if (p->topo == MAX)
        return false;
    p->itens[p->topo] = n;
    p->topo++;
    return true;
}

// Adicione "char"
char pop(Pilha *p) {
    if (p->topo == 0)
        return '\0';
    p->topo--;
    return p->itens[p->topo];
}

int main() {
    char c[10] = "Mariane";
    Pilha p;
    
    iniciaPilha(&p);

    // Empilhando cada letra
    for (int i = 0; i < (int)strlen(c); i++) {
        push(&p, c[i]);
    }

    printf("Palavra original: %s\n", c);
    printf("A sair da pilha (Invertida): ");

    // Desempilhando e imprimindo
    while (p.topo > 0) {
        printf("%c", pop(&p));
    }
    printf("\n");

    return 0;
}