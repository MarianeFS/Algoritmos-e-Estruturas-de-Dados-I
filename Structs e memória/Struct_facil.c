/*
Crie uma struct Livro (titulo, autor, páginas). Declare uma variável, preencha-a e imprima os dados
usando um ponteiro para a struct.
*/

#include <stdio.h>

    typedef struct {
        char titulo[50]; // Sem a alocação dinâmica, ainda definimos um tamanho finito de caracteres aceito na variável
        char autor[50];
        int pag;
    } Livro;

int main() {

    Livro n; // "Ficha" da variável struct criada
    Livro *ptr = &n; // Ponteiro para a "ficha"

    printf("Qual seu livro favorito?\n"); 
    printf("Título:\n");
    scanf(" %[^\n]", ptr->titulo); // " %[^\n]", lê a string com espaço

    printf("Autor:\n");
    scanf(" %[^\n]", ptr->autor);

    printf("Qtd de páginas:\n");
    scanf("%d", &ptr->pag); // Usa "&" para indicar onde (em qual endereço da memória) deve guardar o número, os arrays não precisam, pois o primeiro caractere já representa o primeiro espaço de memória

    printf("\nDados do livro: \n");

    printf("Título: %s \nAutor: %s \nQtd de páginas: %d \n", ptr->titulo, ptr->autor, ptr->pag);

    return 0;
}
