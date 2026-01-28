#ifndef FILA_MEDIO_H
#define MAX 10

typedef struct {
    int itens[MAX];
    int frente;
    int tras;
} FilaCircular;

int contarElementos(FilaCircular *f);

#endif