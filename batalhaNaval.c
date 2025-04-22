#include <stdio.h>

int main(){
    char cabecalho[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[10][10];

    int linha, coluna;

    // Inicializa todas as posições do tabuleiro com 0.
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            tabuleiro[linha] [coluna] = 0;
        }
    }

    // Posiciona o navio horizontal.
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;

    // Posiciona o navio vertical.
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][7] = 3;

    // Imprime cabeçalho das colunas ('A' a 'J').
    printf("   ");
    for(coluna = 0; coluna < 10; coluna++){
        printf(" %c", cabecalho[coluna]);
    }
    printf("\n");

    // Imprime o índice (1 a 10) e conteúdo (0 ou 3) das linhas.
    for(linha = 0; linha < 10; linha++){
        printf("%2d ", linha + 1);

        for(coluna = 0; coluna < 10; coluna++){
            printf(" %d", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}