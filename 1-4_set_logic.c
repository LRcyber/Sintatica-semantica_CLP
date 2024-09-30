/*4. Uso de sentenças lógicas*/

#include <stdio.h>

int main() {
    int a = 25;
    int b = 20;

    printf("\n ___E_____ \n");
    if (a < b && b > 15) {

        printf("AMBAS VERDADE\n");
    } else {
        printf("UMA FALSA\n");
    }
    printf("\n ___OU_____\n");

if (a < b || b > 55) {
        printf("VERDADE\n");
    } else {
        printf("FALSO\n");
    }
    return 0;
}
