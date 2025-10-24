#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código implementa todos os níveis do desafio conforme o arquivo-base.
// Cada nível expande as funcionalidades usando vetores e matrizes.

int main() {
printf("Desafio Batalha Naval!\n");
return 0;

    // ===========================================
    // Nível Novato - Posicionamento dos Navios
    // ===========================================
    printf("=== Nivel Novato ===\n");

    // Declara uma matriz bidimensional 5x5
    int tabuleiroNovato[5][5] = {0};

    // Posiciona dois navios: um horizontal e outro vertical
    // Navio 1 (horizontal)
    tabuleiroNovato[1][1] = 1;
    tabuleiroNovato[1][2] = 1;
    tabuleiroNovato[1][3] = 1;

    // Navio 2 (vertical)
    tabuleiroNovato[2][4] = 1;
    tabuleiroNovato[3][4] = 1;
    tabuleiroNovato[4][4] = 1;

    // Exibe coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    printf("Navio 1 (horizontal): (1,1), (1,2), (1,3)\n");
    printf("Navio 2 (vertical): (2,4), (3,4), (4,4)\n");

    // ===========================================
    // Nível Aventureiro - Expansão do Tabuleiro
    // ===========================================
    printf("\n=== Nivel Aventureiro ===\n");

    // Expande o tabuleiro para 10x10
    int tabuleiroAventureiro[10][10] = {0};

    // Posiciona quatro navios, incluindo dois na diagonal
    // Horizontal
    tabuleiroAventureiro[0][0] = 3;
    tabuleiroAventureiro[0][1] = 3;
    tabuleiroAventureiro[0][2] = 3;

    // Vertical
    tabuleiroAventureiro[2][5] = 3;
    tabuleiroAventureiro[3][5] = 3;
    tabuleiroAventureiro[4][5] = 3;

    // Diagonal principal
    tabuleiroAventureiro[6][6] = 3;
    tabuleiroAventureiro[7][7] = 3;
    tabuleiroAventureiro[8][8] = 3;

    // Diagonal secundária
    tabuleiroAventureiro[6][3] = 3;
    tabuleiroAventureiro[7][2] = 3;
    tabuleiroAventureiro[8][1] = 3;

    // Exibe o tabuleiro completo
    printf("Tabuleiro 10x10 (0 = vazio, 3 = navio):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiroAventureiro[i][j]);
        }
        printf("\n");
    }

    // ===========================================
    // Nível Mestre - Habilidades Especiais
    // ===========================================
    printf("\n=== Nivel Mestre ===\n");

    // Criação das matrizes de habilidades (5x5)
    int cone[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {1,1,1,1,1},
        {1,1,1,1,1}
    };

    int octaedro[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };

    int cruz[5][5] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,1,0,0}
    };

    // Exibe cada habilidade
    printf("\nHabilidade em CONE:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade em OCTAEDRO:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade em CRUZ:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
