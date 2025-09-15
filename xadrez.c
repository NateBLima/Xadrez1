#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== Movimento da Torre ===\n");
    // Torre: 5 casas para a direita (usando for)
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n=== Movimento do Bispo ===\n");
    // Bispo: 5 casas na diagonal para cima e direita (usando while)
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n=== Movimento da Rainha ===\n");
    // Rainha: 8 casas para a esquerda (usando do-while)
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    return 0;
}
