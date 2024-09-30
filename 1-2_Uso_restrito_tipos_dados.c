/*2. Uso restrito de tipos de dados em determinados contextos;*/
#include <stdio.h>

// Função que recebe apenas números inteiros
void calculateSquare(int number) {
    printf("o quadrado de %d eh %d\n", number, number * number);
}

int main() {
    int num = 5.5; // uso de um float
    calculateSquare(num); // Correto

    // calculateSquare(5.5); // Erro: tipos incompatíveis
    //Erro semântico, pois o programa funciona, mas gera resultado incorreto

    return 0;
}
