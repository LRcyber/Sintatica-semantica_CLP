/*5. Uso de senten�as com opera��es aritm�ticas*/

#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    float c = 27.32;
    float d = 3.45;

    printf ("\nINT \n");
    printf("Add: %d\n", a + b);
    printf("Sub: %d\n", a - b);
    printf("Mult: %d\n", a * b);
    printf("Div: %d\n", a / b); // Divis�o inteira
    printf("Mod: %d\n", a % b);  // Resto da divis�o

    printf ("\n\nFLOAT \n");
    printf("Add: %f\n", c + d);
    printf("Sub: %f\n", c - d);
    printf("Mult:%f\n", c * d);
    printf("Div: %f\n", c / d); // Divis�o inteira
    // printf("Mod: %f\n", c % d);  // Resto da divis�o erro sint�tico
    return 0;
}

