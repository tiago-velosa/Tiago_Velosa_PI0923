#include <stdio.h>
 
int main() {
    int Num1, Num2, Num3;
 
    // Leitura dos três valores inteiros
    printf("Insira o primeiro valor: ");
    scanf("%d", &Num1);
    printf("Insira o segundo valor: ");
    scanf("%d", &Num2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &Num3);
 
    if (Num1 > Num2) {
        int temp = Num1;
        Num1 = Num2;
        Num2 = temp;
    }
    if (Num2 > Num3) {
        int temp = Num2;
        Num2 = Num3;
        Num3 = temp;
    }
    if (Num1 > Num2) {
        int temp = Num1;
        Num1 = Num2;
        Num2 = temp;
    }
 
    printf("Ordem crescente: %d, %d, %d\n", Num1, Num2, Num3);
 
    printf("Ordem decrescente: %d, %d, %d\n", Num3, Num2, Num1);
 
    return 0;
}