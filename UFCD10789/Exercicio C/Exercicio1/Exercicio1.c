#include <stdio.h>

int main() {
    int total_segundos=0, horas=0, minutos=0, segundos=0;

    printf("Insira o tempo em segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600; 
    total_segundos = total_segundos % 3600; 
    minutos = total_segundos / 60; 
    segundos = total_segundos % 60;

    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos.\n", total_segundos, horas, minutos, segundos);

    return 0;
}
