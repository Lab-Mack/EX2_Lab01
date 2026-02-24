#include <stdio.h>

int main() {
    int hora, minutos;

    printf("Digite a hora (0 a 23): ");
    scanf("%d", &hora);

    minutos = hora * 60;

    printf("Desde o inicio do dia se passaram %d minutos.\n", minutos);

    return 0;
}
