/*
Implemente um TAD para representar uma Conta Bancária (n ́umero, saldo). Crie funções
para depositar, sacar e consultar saldo em arquivos separados.
*/

#ifndef CONTA_H
#define CONTA_H

typedef struct {
    int nome;
    int cpf;
    float saldo;
} ContaBancaria;

float depositar(float f, float saldo_atual);
float sacar(float f, float saldo_atual);
void consultar(float saldo_atual);

#endif