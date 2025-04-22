#include <stdio.h>
 
int main() {
    int i;
    float notas[10], soma = 0, media, count_acima_media = 0;
 
    for (i = 0; i < 10; i++) {
        printf("Introduza a nota do aluno %d (de 0 a 20): ", i + 1);
        scanf("%f", &notas[i]);

        if (notas[i] < 0 || notas[i] > 20) {
            printf("Nota inválida! A nota deve estar entre 0 e 20.\n");
            i--; 
        } else {
            soma += notas[i]; 
        }
    }

    media = soma / 10;

    for (i = 0; i < 10; i++) {
        if (notas[i] >= media) {
            count_acima_media++;
        }
    }
 
    printf("\nMédia das notas: %.2f\n", media);
    printf("Número de alunos com nota igual ou superior à média: %.0f\n", count_acima_media);
 
    return 0;
}