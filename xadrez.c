#include <stdio.h>

int main() {
    // Movimento da Torre (for): 5 casas para a direita
    int casas_torre = 5;
    printf("Torre:\n");
    for(int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (while): 5 casas na diagonal superior direita
    int casas_bispo = 0;
    printf("\nBispo:\n");
    while(casas_bispo < 5) {
        printf("Cima, Direita\n");
        casas_bispo++;
    }

    // Movimento da Rainha (do-while): 8 casas para a esquerda
    int casas_rainha = 8;
    printf("\nRainha:\n");
    do {
        printf("Esquerda\n");
        casas_rainha--;
    } while(casas_rainha > 0);

    return 0;
}
