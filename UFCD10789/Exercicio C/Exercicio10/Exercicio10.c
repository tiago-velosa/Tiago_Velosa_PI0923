#include <stdio.h>
 
int main() {
    int i, numero;
 
    for (i = 1; i <= 10; i++) {
        printf("Introduza o %dº número: ", i);
        scanf("%d", &numero);
 
        if (numero % 2 == 0) {
            printf("O número %d é PAR.\n", numero);
        } else {
            printf("O número %d é ÍMPAR.\n", numero);
        }
    }
 
    return 0;
}