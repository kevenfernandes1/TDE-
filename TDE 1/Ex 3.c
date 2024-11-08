#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    int id;
    char nome[50];
    float preco;
} Produto;

int main() {
    Produto produtos[MAX_PRODUTOS];
    int n, i, busca_id;
    int encontrado = 0;
    float novo_preco;

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
    }

    // Lê o ID do produto a ser atualizado
    printf("Digite o ID do produto a ser atualizado: ");
    scanf("%d", &busca_id);

    // Busca pelo produto com o ID fornecido
    for (i = 0; i < n; i++) {
        if (produtos[i].id == busca_id) {
            encontrado = 1;
            printf("Produto encontrado:\n");
            printf("ID: %d\n", produtos[i].id);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Preço atual: %.2f\n", produtos[i].preco);

            // Lê o novo preço
            printf("Digite o novo preço do produto: ");
            scanf("%f", &novo_preco);

            // Atualiza o preço do produto
            produtos[i].preco = novo_preco;

            printf("Preço atualizado com sucesso!\n");
            printf("Novo preço do produto: %.2f\n", produtos[i].preco);
            break;
        }
    }

    if (!encontrado) {
        printf("Produto com ID %d não foi encontrado.\n", busca_id);
    }

    return 0;
}
