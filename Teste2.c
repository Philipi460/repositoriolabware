#include <stdio.h>

// Funcao para verificar se um numero pertence � sequencia de Fibonacci
int is_fibonacci(int num) {
    int a = 0, b = 1, temp;

    // Laco para verificar a sequencia
    while (b <= num) {
        if (b == num) {
            return 1;  // Verdadeiro se o numero pertence � sequencia
        }
        temp = b;
        b = a + b;  // Atualiza a sequencia
        a = temp;
    }
    return 0;  // Falso se o numero nao pertence � sequencia
}

int main() {
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);  // Le o numero informado pelo usuario

    // Verifica se o numero informado pertence � sequencia de Fibonacci
    if (is_fibonacci(num)) {
        printf("O numero %d pertence � sequencia de Fibonacci.\n", num);
    } else {
        printf("O numero %d nao pertence � sequencia de Fibonacci.\n", num);
    }

    return 0;
}
