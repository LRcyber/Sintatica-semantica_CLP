/*1. Constantes usadas na definição de intervalos numéricos*/

#include <stdio.h>

#define MAX 120 // Constante para valor máximo
#define MIN 0   // Constante para valor mínimo

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
