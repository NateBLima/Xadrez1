#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo
    printf("\n=== Movimento do Bispo ===\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha
    printf("\n=== Movimento da Rainha ===\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    // Movimento do Cavalo
    printf("\n=== Movimento do Cavalo ===\n");
    int movimentosBaixo = 2;    // duas casas para baixo
    int movimentosEsquerda = 1; // uma casa para a esquerda

    // Loop externo (for) controla o movimento para baixo
    for (int i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while) controla o movimento para a esquerda
    int m = 1;
    while (m <= movimentosEsquerda) {
        printf("Esquerda\n");
        m++;
    }

    return 0;
}
