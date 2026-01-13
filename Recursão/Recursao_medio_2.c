/*
Inversão: Crie uma função que imprima um vetor na ordem inversa usando recursividade (Dica:
a impressão deve ocorrer após a chamada recursiva).
*/

#include <stdio.h>
#include <stdlib.h>


void inverso(int *vet, int n){
    if(n < 0) return;
    printf("%d\n", vet[n]);
    inverso(vet, n - 1);
}

int main () {
    int m, i;
    int *p;

    printf("Quantos números deseja digitar: \n");
    scanf("%d", &m);

    p = (int *) malloc(m * sizeof(int));
    
    if(p == NULL) {
        printf("Erro: Memória insufuciente!");
        return 1;
    }

    printf("Digite-os: \n");
    for(i = 0; i < m; i++) {
        scanf("%d", &p[i]);
    }

    printf("Vetor na ordem inversa: \n");
    inverso(p, m - 1);

    free(p);

    return 0;

}