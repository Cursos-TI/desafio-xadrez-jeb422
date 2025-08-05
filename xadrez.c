#include <stdio.h>

int main() {
    int torre, bispo, rainha;

    // Movimento da Torre 
    printf("Movimento da Torre:\n");
    for (torre = 1; torre <= 5; torre++) {
        printf("Torre moveu para Direita\n");
    }

    // Movimento do Bispo 
    printf("\nMovimento do Bispo:\n");
    bispo = 1;
    while (bispo <= 5) {
        printf("Bispo moveu para Cima Direita\n");
        bispo++;
    }

    // Movimento da Rainha 
    printf("\nMovimento da Rainha:\n");
    rainha = 1;
    do {
        printf("Rainha moveu para Esquerda\n");
        rainha++;
    } while (rainha <= 5);

    printf("\n");
    
    int i;
    for (i = 0; i < 1; i++) {  
        int j = 0;

        // Primeiro: duas casas para baixo 
        while (j < 2) {
            printf("Cavalo moveu para Baixo\n");
            j++;
        }

        // Depois: uma casa para a esquerda
        printf("Cavalo moveu para Esquerda\n");
    }

    return 0;
}
