/* 
Crie um programa que exiba o tamanho (sizeof) de um int, int*, char e char*. Reflita sobre os 
resultados em sistemas 64 bits.
*/

#include <stdio.h>

int main () {
    int n;
    int* p;
    char c;
    char* q;

    printf("%zu\n", sizeof(int)); // Imprime 4
    printf("%zu\n", sizeof(int*)); // Imprime 8
    printf("%zu\n", sizeof(char)); // Imprime 1
    printf("%zu\n", sizeof(char*)); // Imprime 8
return 0;
}
