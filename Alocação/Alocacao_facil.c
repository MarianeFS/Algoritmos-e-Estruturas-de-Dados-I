/*
Peça ao usuário um número N, aloque um array de float com esse
tamanho, leia os valores e imprima a média.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *array;
    float soma = 0;
    float media;

    printf("Quantos números deseja?\n");
    scanf("%d", &n);

    array = (float*) malloc(n*sizeof(float));

    if(array == NULL) {
        printf("Erro: memória insuficiente!\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Digite o número %d: \n", i + 1); // Facilita a compreensão visual do usuário (começa a contagem do 1, não do 0)
        scanf("%f", &array[i]);
        soma += array[i];
    }
    media = soma / n;

    printf("\nA média do(s) %d array(s) é: %.2f\n", n, media);

    free(array);
    array = NULL;

    return 0;
}
