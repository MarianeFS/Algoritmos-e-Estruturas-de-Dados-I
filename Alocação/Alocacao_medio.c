/*
Crie uma função que receba uma string e retorne uma cópia dela
alocada dinamicamente (simulação da função strdup).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* funcaoStrdup(char *origem){
    int tam = strlen(origem);
    char *copia = (char*) malloc((tam+ 1) * sizeof(char));

    if(copia == NULL) return NULL;

    strcpy(copia, origem);

    return copia;
}

int main() {
    char nome[100];
    char *clone;

    printf("O que deseja copiar?\n");
    scanf(" %[^\n]", nome);

    clone = funcaoStrdup(nome);

    if(clone != NULL) {
        printf("Nome original: %s\n", nome);
        printf("Nome clonado: %s\n", clone);
    free(clone);
    clone = NULL;
    } else {
        printf("Erro ao alocar memória.\n");
    }
    return 0;

}
