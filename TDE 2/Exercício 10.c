#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;
    int letters = 0;
    int digits = 0;
    int specialChars = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (isalpha((unsigned char) str[i])) {
            letters++;
        } else if (isdigit((unsigned char) str[i])) {
            digits++;
        } else {
            specialChars++;
        }
        i++;
    }

    printf("Número de letras: %d\n", letters);
    printf("Número de dígitos: %d\n", digits);
    printf("Número de caracteres especiais: %d\n", specialChars);

    return 0;
}
