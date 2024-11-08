#include <stdio.h>

#define MAX_PRODUTOS 100

typedef struct {
    int id;
    char nome[50];
    float preco;
} Produto;

int main() {
    Produto produtos[MAX_PRODUTOS];
    int n, i;
    float soma = 0.0;
    float media;

    // Lê o número de produtos
    printf("Digite o número de produtos: ");
    scanf("%d", &n);

    // Lê as informações dos produtos
    for (i = 0; i < n; i++) {
        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d", &produtos[i].id);
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);
        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);

        // Acumula o preço dos produtos
        soma += produtos[i].preco;
    }

    // Calcula a média dos preços
    if (n > 0) {
        media = soma / n;
    } else {
        media = 0.0;
    }

    // Exibe a média dos preços
    printf("A média dos preços dos produtos é: %.2f\n", media);

    return 0;
}
