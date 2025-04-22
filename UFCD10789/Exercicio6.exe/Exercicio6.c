#include <stdio.h>
#include <string.h>
 
int main() {
    char nome_cliente[100];
    float valor_compra, desconto, valor_desconto, valor_total;
 
  
    printf("Introduza o nome do cliente: ");
    fgets(nome_cliente, sizeof(nome_cliente), stdin);
    nome_cliente[strcspn(nome_cliente, "\n")] = '\0';  
 
   
    printf("Introduza o valor da compra (em euros): ");
    scanf("%f", &valor_compra);
 
    
    if (valor_compra <= 200.00) {
        desconto = 10; 
    } else if (valor_compra > 200.00 && valor_compra <= 500.00) {
        desconto = 15; 
    } else {
        desconto = 20;  
    }

    valor_desconto = (valor_compra * desconto) / 100;
    valor_total = valor_compra - valor_desconto;
 
    printf("\n--- Resumo da Compra ---\n");
    printf("Cliente: %s\n", nome_cliente);
    printf("Valor da compra: %.2f€\n", valor_compra);
    printf("Desconto aplicado: %.2f%%\n", desconto);
    printf("Valor do desconto: %.2f€\n", valor_desconto);
    printf("Total a pagar: %.2f€\n", valor_total);
 
    return 0;
}