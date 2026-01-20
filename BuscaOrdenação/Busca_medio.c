/*
Implemente a Busca Binária em um vetor dinâmico de 1000 elementos. Compare o tempo de
execução (ou número de iterações) com uma busca sequencial comum.
*/

#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int *v, int n, int alvo) {
    int esq = 0;
    int dir = n - 1;
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;
        if (v[meio] == alvo)
            return meio;
        if (v[meio] < alvo)
            esq = meio + 1;
        else dir = meio - 1;
    }
    return -1;
}

int main() {
    int n = 1000, m, resultado;
    int *vet;

    printf("Quantos números deseja inserir?\n");
    scanf("%d", &n);
    printf("\n");

    vet = (int*) malloc(n*sizeof(int));

    if(vet == NULL) {
        printf("Erro: memória insuficiente!");
        return 1;
    }

    printf("Digite os %d números em ordem crescente: \n", n);
        for(int i = 0; i < n; i++) {
            scanf("%d", &vet[i]);
        }
    printf("\n");


    printf("Qual número deseja encontrar?\n");
    scanf("%d", &m);
    printf("\n");


    resultado = buscaBinaria(vet, n, m);

    if(resultado != -1) {
        printf("Número %d encontrado na posição: %d\n", m, resultado);
    } else {
        printf("Número %d não encontrado no vetor. \n", m);
    }
    printf("\n");


    free(vet);

    return 0;
}