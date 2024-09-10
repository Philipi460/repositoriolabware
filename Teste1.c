#include <stdio.h>

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    // Laço de repetição enquanto K for menor que INDICE
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;  // Adiciona o valor de K à SOMA
    }

    printf("O valor de SOMA é: %d\n", SOMA);  // Exibe o resultado final
    return 0;
}
