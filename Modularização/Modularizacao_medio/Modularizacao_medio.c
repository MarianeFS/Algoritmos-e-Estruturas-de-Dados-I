/*
Implemente um TAD para representar uma Conta Bancária (n ́umero, saldo). Crie funções
para depositar, sacar e consultar saldo em arquivos separados.
*/


#include <stdio.h>
#include "Modularizacao_medio.h"

float depositar(float f, float saldo_atual){
    int saldo;
    saldo = saldo_atual + f;
    return saldo;
}

float sacar(float f, float saldo_atual){
if (f > saldo_atual) {
        printf("Saldo insuficiente!\n");
        return saldo_atual;
    }
    return saldo_atual - f;
}

void consultar(float saldo_atual){
    printf("Saldo atual: R$ %.2f\n", saldo_atual);
    printf("\n");
}

int main() {

    float f; // valor
    float m = 0.0; // saldo
    int n;

    do {
        printf("O que deseja realizar? \n1 - Depósito \n2 - Saque \n3 - Consultar saldo \nEscolha: ");
        scanf("%d", &n);

        printf("\n");
        switch (n)
        {
        case 1:
            printf("Qual é o valor do depósito?\n");
            scanf("%f", &f);
            m = depositar(f, m);
            printf("\n");
            break;

        case 2:
            printf("Qual é o valor do saque?\n");
            scanf("%f", &f);
            m = sacar(f, m);
            printf("\n");
            break;

        case 3:
            consultar(m);
            break;

        default:
        printf("Opção inválida!\n");
        }
    } while (n != 0); // O programa repete até você digitar 0

    return 0;
}