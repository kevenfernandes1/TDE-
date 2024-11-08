#include <stdio.h>

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
    int n, i;
    int somaGolsPro = 0;
    float mediaGolsPro;

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

        somaGolsPro += clubes[i].golsPro;
    }

    if (n > 0) {
        mediaGolsPro = (float)somaGolsPro / n;
    } else {
        mediaGolsPro = 0.0;
    }

    printf("A média de gols pró dos clubes é: %.2f\n", mediaGolsPro);

    printf("Clubes com gols pró superior à média:\n");
    for (i = 0; i < n; i++) {
        if (clubes[i].golsPro > mediaGolsPro) {
            printf("ID: %d, Nome: %s, Gols Pró: %d\n", 
                    clubes[i].id, clubes[i].nome, clubes[i].golsPro);
        }
    }

    return 0;
}