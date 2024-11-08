#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Você digitou: %s\n", str);

    int length = strlen(str);
    printf("O comprimento da string é: %d\n", length);

    return 0;
}
