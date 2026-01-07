/* 
Declare um ponteiro para float, atribua um valor a uma variável float e altere esse valor usando 
o ponteiro. Imprima o resultado.
*/

#include <stdio.h>

int main() {
    float x = 0.5;
    float *f; // Declara o ponteiro
    f = &x; // "f" recebe o endereço de "x"

    *f = 2.5; // Aponta para "f" e modifica o valor para "2.5"

    printf("%f\n", x); // Impressão do valor modificado
    printf("%f\n", *f); // Impressão via ponteiro

    return 0;
}
