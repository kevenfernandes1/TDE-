#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;
    int count = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        char ch = tolower((unsigned char) str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        i++;
    }

    printf("Número de vogais na string: %d\n", count);

    return 0;
}
