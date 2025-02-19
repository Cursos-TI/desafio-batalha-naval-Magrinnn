#include <stdio.h>

#define TAMANHO_NAVIO 3

int main() {
    // Definição das coordenadas iniciais
    int navio_vertical[TAMANHO_NAVIO][2] = {{2, 1}, {3, 1}, {4, 1}}; // Navio vertical
    int navio_horizontal[TAMANHO_NAVIO][2] = {{5, 3}, {5, 4}, {5, 5}}; // Navio horizontal
    
    // Exibição das coordenadas
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("(%d, %d)\n", navio_vertical[i][0], navio_vertical[i][1]);
    }
    
    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("(%d, %d)\n", navio_horizontal[i][0], navio_horizontal[i][1]);
    }
    
    return 0;
}
