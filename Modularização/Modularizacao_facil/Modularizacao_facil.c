/*
Crie uma biblioteca chamada matematica.h que contenha funções para somar e subtrair dois
números. Implemente-as em matematica.c.
*/

#include <stdio.h>
#include "Modularizacao_facil.h"

int soma(int a, int b) {
    return a + b;
}

int subtrair(int m, int n) {
    return m - n;
}

int main() {
    int x, y, resultado_1, resultado_2;

    printf("Digite dois números: \n");
    scanf("%d %d", &x, &y);

    resultado_1 = soma(x, y);
    printf("A soma entre %d e %d é: %d\n", x, y, resultado_1);
    
    resultado_2 = subtrair(x, y);
    printf("A subtração entre %d e %d é: %d\n", x, y, resultado_2);

    return 0;

}

