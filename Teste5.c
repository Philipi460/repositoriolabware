#include <stdio.h>
#include <string.h>

// Funcao para inverter uma string
void inverter_string(char* str) {
    int i, len = strlen(str);  // Obtem o comprimento da string

    // Exibe a string de tras para frente
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Informe uma string: ");
    scanf("%s", str);  // Le a string informada pelo usuario
    
    printf("String invertida: ");
    inverter_string(str);  // Chama a funcao para inverter a string
    
    return 0;
}
