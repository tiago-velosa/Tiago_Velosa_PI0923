#include <stdio.h>
int main() {
    float saldo_inicial, cheque;
    printf("Insira o saldo inicial do cliente:  ");
    scanf("%f", &saldo_inicial);
    printf("Insira o valor do cheque:  ");
    scanf("%f", &cheque);
    if (saldo_inicial >= cheque) {
        saldo_inicial = saldo_inicial - cheque;  
        printf("Cheque aprovado! O saldo após o desconto será € %.2f\n", saldo_inicial);
    } else {
        printf("Cheque recusado! Saldo insuficiente.\n");
    }
    return 0;
}
