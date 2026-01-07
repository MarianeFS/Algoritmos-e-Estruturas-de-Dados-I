/*
Aritmética de Vetor: Declare um vetor de 5 posições. Use um ponteiro para percorrer
o vetor e preenchê-lo com valores lidos do teclado. Depois, use o mesmo ponteiro para
imprimir os valores na ordem inversa.
*/

#include <stdio.h>
int main () {
    int i;
    int vet[5];
    int *p;

    for(int i = 0; i < 5; i++){ // Lê os números digitados e só guarda os 5 primeiros
        scanf("%d", &vet[i]);
    }

    p = &vet[4]; // Inicia a váriavel na última posição

    for(int i = 0; i < 5; i++){ // Printa os elementos na ordem inversa, utilizando o p anterior
        printf("%d\n", *p);
        p--;
    }

return 0;
}