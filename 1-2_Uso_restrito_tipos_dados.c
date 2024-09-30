/*2. Uso restrito de tipos de dados em determinados contextos;*/
#include <stdio.h>

// Fun��o que recebe apenas n�meros inteiros
void calculateSquare(int number) {
    printf("o quadrado de %d eh %d\n", number, number * number);
}

int main() {
    int num = 5.5; // uso de um float
    calculateSquare(num); // Correto

    // calculateSquare(5.5); // Erro: tipos incompat�veis
    //Erro sem�ntico, pois o programa funciona, mas gera resultado incorreto

    return 0;
}
