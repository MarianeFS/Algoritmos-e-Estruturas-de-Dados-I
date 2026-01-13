/*
Implemente uma função que exiba uma contagem regressiva de N até 0 utilizando recursão.
*/

#include <stdio.h>

int contRegres(int N) {
    if(N == 0) return 0;
    printf("%d\n", N);
    return N + contRegres(N - 1);
}

int main() {
    int M;

    printf("Digite um número:\n");
    scanf("%d", &M);
    printf("A soma dos números de %d até 0 é: %d\n", M, contRegres(M));

    return 0;

}