#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int count = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (str[i] == 'a') {
            count++;
        }
        i++;
    }

    printf("O caractere 'a' aparece %d vezes na string.\n", count);

    return 0;
}
