/*
Crie um programa que aloque um vetor para 3 floats, leia os valores, redimensione para 5 posições
usando realloc, leia os novos valores e imprima tudo.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float *v = malloc(3 * sizeof(float));
    v[0] = 10; v[1] = 20; v[2] = 30;

    printf("Valores antes de redimensionar: \n");
    for(int i = 0; i < 3; i++) {
        printf("%.2f\n", *(v + i));
    }

    float *temp = realloc(v, 5 * sizeof(float));

    if(temp != NULL) {
        v = temp; // Sucesso: v aponta para o novo bloco
        v[3] = 40; v[4] = 50;
    } else {
        free(v); // Falha: liberar o original para evitar vazamento de memória
        return 1;
    }

    printf("Valores após redimensionar: \n");
    for(int i = 0; i < 5; i++) {
        printf("%.2f\n", *(v + i));
    }

    free(v);

    return 0;
}