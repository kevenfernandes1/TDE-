#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    // Lê a string
    printf("Digite uma string: ");
    fgets(str1, 100, stdin);

    // Remove o caractere de nova linha do final da string, se existir
    str1[strcspn(str1, "\n")] = '\0';

    // Copia str1 para str2
    strcpy(str2, str1);

    // Exibe as duas strings
    printf("String original: %s\n", str1);
    printf("String copiada: %s\n", str2);

    return 0;
}
