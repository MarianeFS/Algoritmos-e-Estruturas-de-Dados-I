/*
Implemente uma função que inicializa a lista com uma capacidade inicial fornecida pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *dados;
    int tam;
    int capacidade;
} Lista;

int iniciaLista (Lista *l, int n) {
    l->capacidade = n;
    l->tam = 0;
    l->dados = (int *) malloc(n * sizeof(int));

    if(l->dados == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
}

int main() {
    int n;
    Lista l;

    printf("Qual a capacidade inicial da sua lista?\n");

    scanf("%d", &n);

    printf("\n");

    iniciaLista (&l, n);
    printf("Lista inicializada com capacidade: %d\n", l.capacidade); // Imprime a capacidade em inteiros
        printf("\n");
    printf("Espaço de memória reservado: %p\n", (void*)l.dados); // Imprime o endereço de onde está armazenado os dados na memória
        printf("\n");

    free(l.dados);

    return 0;
}