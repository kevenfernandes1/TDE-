#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int count = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            count++;
        }
        i++;
    }

    printf("Número de espaços em branco na string: %d\n", count);

    return 0;
}
