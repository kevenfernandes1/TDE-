#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char str3[200]; 
    
    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);

    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    str2[strcspn(str2, "\n")] = '\0';

    strcpy(str3, str1);

    strcat(str3, str2);

    printf("Resultado da concatenação: %s\n", str3);

    return 0;
}
