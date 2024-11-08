#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        str[i] = toupper((unsigned char) str[i]);
        i++;
    }

    printf("String convertida: %s\n", str);

    return 0;
}
