/*
Crie um vetor dinâmico de 10 posições, preencha com números aleatórios e ordene usando Bubble
Sort.
*/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *v, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n = 10;
    int *vet;

    printf("Quantos números deseja ordenar?\n");
    scanf("%d", &n);
    printf("\n");

    vet = (int *) malloc(n*sizeof(int));

    if (vet == NULL) {
        printf("Erro: memória insuficiente!\n");
        return 1;
    }

    printf("Números escolhidos: \n");
        for(int i = 0; i < n; i++) {
            scanf("%d", &vet[i]);
        }

    bubbleSort(vet, n);

    printf("\nNúmeros ordenados: \n");
        for(int i = 0; i < n; i++) {
            printf("%d ", vet[i]);
        }
    printf("\n");

    free(vet);

    return 0;

}