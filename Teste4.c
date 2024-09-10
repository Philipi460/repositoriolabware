#include <stdio.h>

int main() {
    // Valores de faturamento por estado
    float SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, Outros = 19849.53;
    float total = SP + RJ + MG + ES + Outros;  // Soma do faturamento total

    // Exibe os percentuais de cada estado
    printf("SP: %.2f%%\n", (SP / total) * 100);
    printf("RJ: %.2f%%\n", (RJ / total) * 100);
    printf("MG: %.2f%%\n", (MG / total) * 100);
    printf("ES: %.2f%%\n", (ES / total) * 100);
    printf("Outros: %.2f%%\n", (Outros / total) * 100);

    return 0;
}
