/*6. Aplica��o de fun��es com recebimento de par�metros e sa�da/retorno da execu��o fora
do contexto ou resultado n�o esperado, a depender dos valores recebidos.*/

#include <stdio.h>

// Fun��o que retorna a divis�o de dois n�meros
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        printf("Error: Division by zero!\n");
        return -1; // Retorno para indicar erro
    }
    return (double) numerator / denominator;
}

int main() {
    int num = -10, den = 10;

    double result = divide(num, den);
    if (den < 0) {
        printf("Operation failed due to invalid denominator.\n");
    } else {
        printf("Result: %.2f\n", result);
    }

    return 0;
}
