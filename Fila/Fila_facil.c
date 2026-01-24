/*
Implemente uma fila dinâmica (com malloc) que armazene senhas de atendimento em um banco.
*/

#include <stdio.h>
#include <stdlib.h>
#include "Fila_facil.h"

void cria_fila(Fila *f){
    f->inicio = NULL;
    f->final = NULL;
    f->qtd = 0;
}

int fila_cheia(Fila *f){
    return 0;
}

int fila_vazia(Fila *f){
    if(f == NULL) {
        return -1;
    }
    f->qtd == 0;
    return 0;
}

int insere_fila(Fila *f, int n){
    No* novo = (No*) malloc(sizeof(No));
    if(novo == NULL) return -1;

    novo->item = n;
    novo->prox = NULL;
    
    if(f->qtd == 0) {
        f->inicio = novo;
    } else {
        f->final->prox = novo; // O antigo último aponta para o novo
    }
    f->final = novo;// O novo passa a ser o último
    f->qtd++;
    return 1;
}

int remove_fila(Fila *f){
    if(f->inicio == NULL) return -1; //Fila vazia
    
    No *aux = f->inicio;
    int m = aux->item;

    f->inicio = f->inicio->prox;

    if(f->inicio == NULL) {
        f->final = NULL;
    }

    free(aux);
    f->qtd--;
    return m;
}

void listar_fila(Fila *f){
    No *atual = f->inicio;
    if(atual == NULL) {
        printf("A fila está vazia!\n");
        return;
    }
    printf("Senhas na fila: \n");
    while (atual != NULL) {
        printf("|%d| ", atual->item);
        atual = atual->prox;
    }
    printf("\n");
}

int main() {
    int opcao, senha, removida;
    Fila f;
    cria_fila(&f);

    do {
        printf("\n-------- SISTEMA DE SENHAS --------\n");
        printf("Qual operação deseja efetuar?\n1. Inserir senha.\n2. Remover/chamar senha.\n3. Listar fila atual.\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Qual senha deseja inserir.\n");
            scanf("%d", &senha);
            insere_fila(&f, senha);
            break;
        
        case 2:
            removida = remove_fila(&f);
            if(removida != -1) {
                printf("Chamando senha: %d\n", removida);
            } else {
                printf("Fila vazia!\n");
            }
            break;
        case 3:
            listar_fila(&f);
            break;
        }
    } while (opcao != 0);

    while (f.inicio != NULL) {
        remove_fila(&f);
    }

    return 0;
}