/*1. Constantes usadas na defini��o de intervalos num�ricos*/

#include <stdio.h>

#define MAX 120 // Constante para valor m�ximo
#define MIN 0   // Constante para valor m�nimo

int main() {
    int num;
    printf("numero: ");
    scanf("%d", &num);

    if (num >= MIN && num <= MAX) {
        printf("Esta no intervalo.\n");
    } else {
        printf("Fora do intervalo!\n");
    }

    return 0;
}
