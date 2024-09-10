#include <stdio.h>

int main() {
    int i, dias_acima_media = 0;
    float faturamentos[] = {1200.50, 2300.75, 0, 1890.80, 0, 2000.30};  // Exemplo de valores de faturamento
    int dias_validos = 0;
    float soma = 0, media, menor = faturamentos[0], maior = faturamentos[0];

    // Calcula a soma dos faturamentos validos e encontra o menor e maior faturamento
    for (i = 0; i < 6; i++) {
        if (faturamentos[i] > 0) {  // Ignora os dias sem faturamento
            soma += faturamentos[i];
            dias_validos++;
            if (faturamentos[i] < menor) menor = faturamentos[i];
            if (faturamentos[i] > maior) maior = faturamentos[i];
        }
    }

    // Calcula a media dos faturamentos validos
    media = soma / dias_validos;

    // Conta o numero de dias em que o faturamento foi superior à media
    for (i = 0; i < 6; i++) {
        if (faturamentos[i] > media) {
            dias_acima_media++;
        }
    }

    printf("Menor faturamento: %.2f\n", menor);
    printf("Maior faturamento: %.2f\n", maior);
    printf("Dias acima da media: %d\n", dias_acima_media);

    return 0;
}
