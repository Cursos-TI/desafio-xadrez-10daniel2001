#include <stdio.h>  
//Carlos daniel

// Função recursiva com loop aninhado para o BISPO
void moverBispo(int i) {
    if (i >= 5) return;

    for (int j = 0; j < 1; j++) {
        printf("BISPO >> SUPERIOR DIREITA\n");
    }

    moverBispo(i + 1);
}

// Função recursiva para a TORRE
void moverTorre(int t) {
    if (t >= 5) return;

    printf("TORRE >> DIREITA\n");
    moverTorre(t + 1);
}

// Função recursiva para a RAINHA
void moverRainha(int r) {
    if (r >= 8) return;

    printf("RAINHA >> ESQUERDA\n");
    moverRainha(r + 1);
}

int main(){ 
    printf("BISPO\n");
    moverBispo(0); // BISPO com função recursiva + for

    printf("\n");
    printf("TORRE\n");
    moverTorre(0); // TORRE com função recursiva

    printf("\n");
    printf("RAINHA\n");
    moverRainha(0); // RAINHA com função recursiva

    printf("\n");
    printf("CAVALO\n");

    // CAVALO com for, múltiplas condições, continue e break
    for (int i = 0, j = 0; i < 3; i++, j++) {
        if (i == 1) {
            printf("CAVALO >> CIMA\n");
            continue;
        }

        if (i == 2) {
            printf("CAVALO >> DIREITA\n");
            break;
        }
    }

//carlos daniel 20/07/2025
    return 0;
}