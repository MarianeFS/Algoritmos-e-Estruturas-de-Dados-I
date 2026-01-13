/*
Fibonacci: Escreva a sequência de Fibonacci de forma recursiva. Explique por que ela é menos
eficiente que a versão iterativa para valores altos de N.
*/

#include <stdio.h>

int fibonacci(int N) {
    if (N <= 1) return N;
    return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
    int M;

    printf("Digite um número: \n");
    scanf("%d", &M);
    printf("A sequência de Fibonacci para o número %d é: %d\n", M, fibonacci(M));

    return 0;
}