/*
Escreva uma função recursiva que calcule a soma de todos os números de 1 até N.
*/

#include <stdio.h>

int somar(int N) {
    if (N == 1) return 1;
    return N + somar(N - 1);
}

int main() {
    int M;

    printf("Digite um número:\n");
    scanf("%d", &M);

    printf("A soma dos números de 1 até %d é: %d\n", M, somar(M));

    return 0;
}