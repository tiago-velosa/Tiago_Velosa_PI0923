#include <stdio.h>

int main() {
    int num1, num2;

    printf("Insira o valor de num1: ");
    scanf("%d", &num1);

    printf("Insira o valor de num2: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        printf("Crescente: %d %d\n", num1, num2);
    } else {
        printf("Crescente: %d %d\n", num2, num1);
    }

    if (num1 > num2) {
        printf("Decrescente: %d %d\n", num1, num2);
    } else {
        printf("Decrescente: %d %d\n", num2, num1);
    }

    return 0;
}

