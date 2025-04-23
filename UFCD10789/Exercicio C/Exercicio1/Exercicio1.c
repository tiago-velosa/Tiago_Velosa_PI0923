#include <stdio.h>

void converter_tempo(int total_segundos) {
    int horas;
    int resto_apos_horas;
    int minutos;
    int segundos;

    horas = total_segundos / 3600;
    resto_apos_horas = total_segundos % 3600;
    minutos = resto_apos_horas / 60;
    segundos = resto_apos_horas % 60;

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
}
int main() {
    int entrada_segundos;

    printf("Insira o tempo em segundos: ");
    scanf("%d", &entrada_segundos);

    converter_tempo(entrada_segundos);
    return 0;
}
