#include <stdio.h>

int main() {
    int n, i, count = 0;
    float valor_max, valor_produto;

    printf("Digite o número de produtos: ");
    scanf("%d", &n);

    printf("Digite o valor máximo: ");
    scanf("%f", &valor_max);

    for (i = 0; i < n; i++) {
        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &valor_produto);

        if (valor_produto < valor_max) {
            count++;
        }
    }

    printf("Número de produtos abaixo de %.2f: %d\n", valor_max, count);

    return 0;
}
