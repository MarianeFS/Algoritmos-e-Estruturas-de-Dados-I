/*
Crie uma função de busca que retorna o índice da primeira ocorrência de um valor X. Se o valor
for encontrado, remova-o da lista.
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

void remover(Lista *l, int indice) {
    if (indice < 0 || indice >= l->tam) // Verifica se o índice existe
        return;
    for(int i = indice; i < l->tam - 1; i++) { // Começa a deslocar do índice desejado, até o último elemento
        l->dados[i] = l->dados[i + 1]; // Desloca os elementos de trás para frente, não deixando o lugar do índice removido vazio
    }
    l->tam--; // Diminui o tamanho da lista
}

void buscaValor (Lista *l, int valor) {
    for(int i = 0; i < l->tam; i++) {
        if (l->dados[i] == valor) {
            remover(l, i);
            printf("Valor %d encontrado no índice %d e removido!\n", valor, i);
            return;
        }
    }
    printf("Valor %d não encontrado na lista.\n", valor);
}

int main() {
    int n;
    int valor;
    Lista l;

    iniciaLista(&l, 10);

    printf("Qual a capacidade da10 sua lista desejada? (máximo 10)\n");
    scanf("%d", &n);

    printf("Digite os %d números da lista: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &l.dados[i]);
        l.tam++;
    }

    printf("Qual número deseja encontrar e remover?\n");
    scanf("%d", &valor);

    buscaValor(&l, valor);

    printf("Lista atualizada: \n");
    if (l.tam == 0) {
        printf("Lista vazia!\n");
    }
    for (int i = 0; i < l.tam; i++) {
        printf("%d ", l.dados[i]);
    }
    printf("\n");

    free(l.dados);

    return 0;
}