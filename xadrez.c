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

    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda (L)
    // Usando loops aninhados: for + while
    int casas_baixo = 2;      // Número de casas para baixo
    int casas_esquerda = 1;   // Número de casas para a esquerda

    printf("\nCavalo:\n");

    // Loop externo: for para as casas para baixo
    for(int i = 0; i < casas_baixo; i++) {
        printf("Baixo\n"); // Imprime cada movimento para baixo

        // Loop interno: while para a casa à esquerda (executa só na última vez)
        if(i == casas_baixo - 1) { // Só executa ao final dos movimentos para baixo
            int j = 0;
            while(j < casas_esquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
