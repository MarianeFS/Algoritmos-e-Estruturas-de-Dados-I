/*
Passagem por Referência: Escreva uma função void calculaCirculo(float r, float
*p, float *a) que calcule o perímetro e a área de um círculo e ”retorne” os dois valores
via ponteiros.
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

void calculaCirculo(float r, float *p, float *a) {
    *p = 2 * PI * r;
    *a = PI * r * r;
}

int main(){
    float r;
    float p;
    float a;

    printf("Qual é o raio?\n");
    scanf("%f", &r);

    calculaCirculo(r, &p, &a); // Consulta o endereço de onde está o valor do perímetro e da área calculados

    printf("Perímetro: %f\n Área: %f\n", p, a); // Imprime os valores sem usar "&", pois consulta somente o valor

    return 0;
}