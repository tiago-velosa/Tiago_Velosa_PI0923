#include <stdio.h>

void analisar_valores(int num1, int num2, int num3) {
    int maior = num1, menor = num1;

    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}

int main() {
    int num1, num2, num3;
    printf("insira tres numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    analisar_valores(num1, num2, num3);
    return 0;
}
