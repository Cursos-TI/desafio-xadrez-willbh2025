#include <stdio.h>

// Função recursiva para movimento da Torre
void movimento_torre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    movimento_torre(casas - 1);
}

// Função recursiva para movimento do Bispo
void movimento_bispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    movimento_bispo(casas - 1);
}

// Função recursiva para movimento da Rainha
void movimento_rainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    movimento_rainha(casas - 1);
}

int main() {
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int casas_cima = 2;
    int casas_direita = 1;

    // Movimento recursivo da Torre
    printf("Torre:\n");
    movimento_torre(casas_torre);

    // Movimento recursivo do Bispo
    printf("\nBispo (Recursivo):\n");
    movimento_bispo(casas_bispo);

    // Movimento do Bispo com loops aninhados
    printf("\nBispo (Loops Aninhados):\n");
    for(int vertical = 0; vertical < casas_bispo; vertical++) {
        for(int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima\nDireita\n");
        }
    }

    // Movimento recursivo da Rainha
    printf("\nRainha:\n");
    movimento_rainha(casas_rainha);

    // Movimento complexo do Cavalo com loops aninhados
    printf("\nCavalo:\n");
    for(int i = 0; i < casas_cima; i++) {
        printf("Cima\n");
        
        if(i == casas_cima - 1) {
            int j = 0;
            while(j < casas_direita) {
                printf("Direita\n");
                j++;
            }
        }
    }

    return 0;
}
