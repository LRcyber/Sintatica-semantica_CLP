/*Sobre a expressão qual seria o resultado semanticamente correto para x
na concepção de somatório? Demonstre em código C/C++.

Resultado Semântico
No somatório, quando considerado para um número finito de termos, oscila entre valores 0 e 1.
No entanto, quando levado ao infinito, não converge para um número definido.

*/


#include <stdio.h>

int main() {
    int n, termos;
    double sum = 0;

    printf("Digite o numero de termos: ");
    scanf("%d", &termos);

    for (n = 0; n < termos; n++) {
        sum += (n % 2 == 0) ? 1 : -1; // Alterna entre 1 e -1
    }

    printf("soma de %d termos do somatorio: %.2f\n", termos, sum);
    return 0;
}

