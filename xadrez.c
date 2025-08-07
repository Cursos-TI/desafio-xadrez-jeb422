#include <stdio.h>

    // Função recursiva para a Torre
    void torre(int casas) {
    if (casas > 0) {
        torre(casas - 1);
        printf("Torre moveu para a Direita\n");
    }
}

    // Função recursiva para a Rainha
    void rainha(int casas) {
    if (casas > 0) {
        rainha(casas - 1);
        printf("Rainha moveu para a Esquerda\n");
    }
}

    // Função recursiva Bispo
    void bispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 1; j++) {
                printf("Bispo moveu para a Cima Direita\n");
            }
        }
        bispo(casas - 1);
    }
}

        // Função com loops aninhados
    void cavalo() {
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < 2; i++) {  // 2 casas para cima
        if (i == 1) {
            printf("Cima\n");
            continue;
        }
        printf("Cima\n");
    }

    for (int j = 0; j < 2; j++) {  // 1 casa para direita
        if (j == 1) break;
        printf("Direita\n");
    }
}

    int main() {
    printf("Movimento da Torre:\n");
    torre(5);

    printf("\nMovimento da Rainha:\n");
    rainha(8);

    printf("\nMovimento do Bispo:\n");
    bispo(5);

    cavalo();

    return 0;
}



/*
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
    
    for (int i = 0, j = 0; i < 1; i++) {  
        
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
*/