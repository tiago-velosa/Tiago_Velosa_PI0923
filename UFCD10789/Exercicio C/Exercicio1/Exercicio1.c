#include <stdio.h>

void converter_tempo(int segundos) {
    int horas = segundos / 3600;
    int segundos_restantes = segundos % 3600;
    int minutos = segundos_restantes / 60;
    int segundos_finais = segundos_restantes % 60;

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos_finais);
}

int main() {
    int segundos;
    printf("Insira o tempo em segundos: ");
    scanf("%d", &segundos);
    converter_tempo(segundos);
    return 0;
}
