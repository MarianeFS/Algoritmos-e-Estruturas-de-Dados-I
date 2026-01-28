/*
Crie uma função que conte quantos elementos existem atualmente em uma fila circular sem usar
um contador global (apenas usando os índices frente e trás).
*/

#include <stdio.h>
#include <stdlib.h>
#include "Fila_medio.h"

// Função solicitada
int contarElementos(FilaCircular *f) {
    // A mágica acontece aqui:
    // Somamos MAX para garantir que o resultado não seja negativo
    // e usamos o módulo (%) para ajustar o valor ao tamanho real
    return (f->tras - f->frente + MAX) % MAX;
}

int main() {
    FilaCircular f;
    
    // Caso 1: Fila linear
    f.frente = 2;
    f.tras = 5;
    printf("Elementos (Linear): %d\n", contarElementos(&f)); // Saída: 3

    // Caso 2: Fila circular (deu a volta)
    f.frente = 8;
    f.tras = 2;
    printf("Elementos (Circular): %d\n", contarElementos(&f)); // Saída: 4

    return 0;
}