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
    int saldoGols;
} Clube;

int main() {
    Clube clubes[MAX_CLUBES];
    int n, i;
    int indiceMelhor = 0, indicePior = 0;

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

    for (i = 1; i < n; i++) {
        if (clubes[i].pontos > clubes[indiceMelhor].pontos || 
            (clubes[i].pontos == clubes[indiceMelhor].pontos && clubes[i].saldoGols > clubes[indiceMelhor].saldoGols)) {
            indiceMelhor = i;
        }
        if (clubes[i].pontos < clubes[indicePior].pontos || 
            (clubes[i].pontos == clubes[indicePior].pontos && clubes[i].saldoGols < clubes[indicePior].saldoGols)) {
            indicePior = i;
        }
    }

    printf("\nClube Campeão:\n");
    printf("ID: %d\n", clubes[indiceMelhor].id);
    printf("Nome: %s\n", clubes[indiceMelhor].nome);
    printf("Vitórias: %d\n", clubes[indiceMelhor].vitorias);
    printf("Empates: %d\n", clubes[indiceMelhor].empates);
    printf("Derrotas: %d\n", clubes[indiceMelhor].derrotas);
    printf("Gols Pró: %d\n", clubes[indiceMelhor].golsPro);
    printf("Gols Contra: %d\n", clubes[indiceMelhor].golsContra);
    printf("Pontos: %d\n", clubes[indiceMelhor].pontos);
    printf("Saldo de Gols: %d\n", clubes[indiceMelhor].saldoGols);

    printf("\nÚltimo Colocado:\n");
    printf("ID: %d\n", clubes[indicePior].id);
    printf("Nome: %s\n", clubes[indicePior].nome);
    printf("Vitórias: %d\n", clubes[indicePior].vitorias);
    printf("Empates: %d\n", clubes[indicePior].empates);
    printf("Derrotas: %d\n", clubes[indicePior].derrotas);
    printf("Gols Pró: %d\n", clubes[indicePior].golsPro);
    printf("Gols Contra: %d\n", clubes[indicePior].golsContra);
    printf("Pontos: %d\n", clubes[indicePior].pontos);
    printf("Saldo de Gols: %d\n", clubes[indicePior].saldoGols);

    return 0;
}
