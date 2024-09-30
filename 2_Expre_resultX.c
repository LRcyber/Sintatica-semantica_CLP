/*Sobre a express�o qual seria o resultado semanticamente correto para x
na concep��o de somat�rio? Demonstre em c�digo C/C++.

Resultado Sem�ntico
No somat�rio, quando considerado para um n�mero finito de termos, oscila entre valores 0 e 1.
No entanto, quando levado ao infinito, n�o converge para um n�mero definido.

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

