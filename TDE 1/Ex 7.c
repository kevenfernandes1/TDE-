#include <stdio.h>
#include <string.h>

#define MAX_CLUBES 10

typedef struct {
    int id;
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int golsPro;
    int golsContra;
    int pontos;
} Clube;

int main() {
    Clube clubes[MAX_CLUBES];
    int n, i, busca_id;
    int encontrado = 0;

    printf("Digite o número de clubes (máximo %d): ", MAX_CLUBES);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o ID do clube %d: ", i + 1);
        scanf("%d", &clubes[i].id);
        printf("Digite o nome do clube %d: ", i + 1);
        scanf("%s", clubes[i].nome);
        printf("Digite o número de vitórias do clube %d: ", i + 1);
        scanf("%d", &clubes[i].vitorias);
        printf("Digite o número de empates do clube %d: ", i + 1);
        scanf("%d", &clubes[i].empates);
        printf("Digite o número de derrotas do clube %d: ", i + 1);
        scanf("%d", &clubes[i].derrotas);
        printf("Digite o número de gols pró do clube %d: ", i + 1);
        scanf("%d", &clubes[i].golsPro);
        printf("Digite o número de gols contra do clube %d: ", i + 1);
        scanf("%d", &clubes[i].golsContra);

        clubes[i].pontos = clubes[i].vitorias * 3 + clubes[i].empates;
    }

    printf("Digite o ID do clube a ser buscado: ");
    scanf("%d", &busca_id);

    for (i = 0; i < n; i++) {
        if (clubes[i].id == busca_id) {
            encontrado = 1;
            printf("Clube encontrado:\n");
            printf("ID: %d\n", clubes[i].id);
            printf("Nome: %s\n", clubes[i].nome);
            printf("Vitórias: %d\n", clubes[i].vitorias);
            printf("Empates: %d\n", clubes[i].empates);
            printf("Derrotas: %d\n", clubes[i].derrotas);
            printf("Gols Pró: %d\n", clubes[i].golsPro);
            printf("Gols Contra: %d\n", clubes[i].golsContra);
            printf("Pontos: %d\n", clubes[i].pontos);
            break;
        }
    }

    if (!encontrado) {
        printf("Clube com ID %d não foi encontrado.\n", busca_id);
    }

    return 0;
}
