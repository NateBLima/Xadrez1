#include <stdio.h>

/* ===========================
   Funções recursivas
   =========================== */

// Torre: move-se em linha reta horizontal (direita)
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Rainha: move-se em linha reta horizontal (esquerda)
void moverRainha(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo com recursividade e loops aninhados
// Move-se 5 casas na diagonal "Cima, Direita"
void moverBispo(int casas) {
    if (casas == 0) return;

    // loop externo = movimento vertical
    for (int i = 1; i <= 1; i++) {
        // loop interno = movimento horizontal
        for (int j = 1; j <= 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

/* ===========================
   Movimento do Cavalo
   =========================== */

// Cavalo: agora com loops complexos (2 casas para cima e 1 para direita)
void moverCavalo() {
    int movimentosCima = 2;
    int movimentosDireita = 1;

    printf("=== Movimento do Cavalo ===\n");

    // loop externo controla movimentos verticais
    for (int i = 1; i <= movimentosCima; i++) {
        // loop interno controla movimentos horizontais
        for (int j = 0; j <= movimentosDireita; j++) {
            if (j == 0) {
                printf("Cima\n");
                continue; // volta para o próximo ciclo sem executar o resto
            }
            if (i == movimentosCima) {
                printf("Direita\n");
                break; // encerra o loop interno quando chega na direita
            }
        }
    }
}

/* ===========================
   Programa principal
   =========================== */
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre (recursivo)
    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre);

    // Movimento do Bispo (recursivo + loops aninhados)
    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casasBispo);

    // Movimento da Rainha (recursivo)
    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo (loops complexos)
    printf("\n");
    moverCavalo();

    return 0;
}
