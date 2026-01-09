/*
Escreva uma função que receba um ponteiro para uma struct Retangulo (largura, altura) e altere
seus valores internamente (passagem por referência).
*/

#include <stdio.h>

typedef struct {
    int largura;
    int altura;
} Retangulo;

void alteraRetangulo (Retangulo *ptr, int novaLargura, int novaAltura) {
    ptr->largura = novaLargura;
    ptr->altura = novaAltura;
}

int main () {
    int n;
    int m;
    Retangulo r;
    Retangulo *ptr = &r;

    alteraRetangulo(&r, n, m);

    printf("Quais são as medidas do retângulo?\n");
    printf("Largura: \n");
    scanf("%d", &n);

    printf("Altura: \n");
    scanf("%d", &m);

    printf("\n");

    printf("Retângulo final\n");
    printf("Largura: %d\n", n);
    printf("Altura: %d\n", m);

    return 0;
}