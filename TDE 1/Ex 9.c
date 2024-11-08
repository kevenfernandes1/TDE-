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
    int saldoGols;
} Clube;

int main() {
    Clube clubes[MAX_CLUBES];
    int n, i;

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

        clubes[i].saldoGols = clubes[i].golsPro - clubes[i].golsContra;
    }

    printf("\nNome e saldo de gols de cada clube:\n");
    for (i = 0; i < n; i++) {
        printf("Nome: %s, Saldo de Gols: %d\n", clubes[i].nome, clubes[i].saldoGols);
    }

    return 0;
}
