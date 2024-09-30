/*3.Uso e dimensões de um array*/

#include <stdio.h>
#define SIZE 5 // atribuição correta para constante


int main() {
    //const int SIZE = 5 ; //erro sintático const int não é considerado uma constante literal

    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7}; // complila com aviso com excesso de elementos na array

    for (int i = 0; i < SIZE; i++) {
        printf("Elemento %d = %d\n", i, numbers[i]);
    }

    return 0;
}
