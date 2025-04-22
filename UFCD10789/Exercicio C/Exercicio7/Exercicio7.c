#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media_final;
 
    printf("Introduza a nota da 1ª prova (0 a 10): ");

    scanf("%f", &nota1);
 
    printf("Introduza a nota da 2ª prova (0 a 10): ");

    scanf("%f", &nota2);
 
    printf("Introduza a nota da 3ª prova (0 a 10): ");

    scanf("%f", &nota3);

    media_final = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    printf("\nMédia final: %.2f\n", media_final);
 
    if (media_final >= 6.0) {

        printf("Resultado: APROVADO\n");

    } else {

        printf("Resultado: REPROVADO\n");

    }
 
    return 0;
}
 