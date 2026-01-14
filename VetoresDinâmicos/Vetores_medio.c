/*
Implemente um ”Vetor Infinito”: O programa deve ler números inteiros do teclado indefinida-
mente. Sempre que o vetor encher, use realloc para dobrar o tamanho dele. O programa para
quando o usuário digitar 0.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int tam = 0;
    int *v = NULL;
    v[n];

    printf("Digite números (0 para parar): \n");

    do {
        scanf("%d", &n);

        if(n != 0) {
            tam++;

            int *temp = realloc(v, tam * sizeof(int));

            if(temp != NULL) {
                v = temp;
                v[tam - 1] = n;
            } else {
                printf("Erro de memória!\n");
                free(v);
                return 1;
            }

        }
    } while (n != 0);

    printf("\nNúmeros guardados: \n");
    for(int i = 0; i < tam; i++) {
        printf("%d\n", v[i]);
    }

    free(v);
    return 0;
}