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
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Posiciona o navio diagonal/direita.
    int linha_inicio_dd = 4;
    int coluna_inicio_dd = 4;
    int tamanho_navio_dd = 3;

    for(int i = 0; i < tamanho_navio_dd; i++){
        tabuleiro[linha_inicio_dd - i][coluna_inicio_dd + i] = 3;
    }

    // Posiciona o navio diagonal/esquerda.
    int linha_inicio_de = 8;
    int coluna_inicio_de = 3;
    int tamanho_navio_de = 3;

    for(int i = 0; i < tamanho_navio_de; i++){
        tabuleiro[linha_inicio_de - i][coluna_inicio_de - i] = 3;
    }
    
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