/*6. Aplicação de funções com recebimento de parâmetros e saída/retorno da execução fora
do contexto ou resultado não esperado, a depender dos valores recebidos.*/

#include <stdio.h>

// Função que retorna a divisão de dois números
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
