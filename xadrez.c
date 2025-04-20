#include <stdio.h>

    void torre(int numero) {
        if(numero > 0) {
            torre(numero - 1);
            printf("Torre se movimenta %d casa(s) para a direita!\n", numero);
        }
    }

    void bispo(int linha, int limite) {
        if (linha > limite) return;
    
        for (int coluna = 1; coluna <= limite; coluna++) {
            if (linha == coluna) {
                printf("Bispo se movimenta %d casa(s) para cima e %d casa(s) para a direita!\n", linha, coluna);
            }
        }
    
        bispo(linha + 1, limite);
    }  

    void rainha (int numero){
        if (numero > 0) {
            rainha(numero - 1);
            printf("Rainha se movimenta %d casa(s) para esquerda!\n", numero);
        }
    }    
    
    void cavalo() {
        for (int i = 1; i <= 2; i++) {
            if (i == 1) {
                printf("Cavalo se movimenta %d casa(s) para cima!\n", i);
                continue;  
            }
            if (i == 2) {
                printf("Cavalo se movimenta %d casa(s) para cima!\n", i);
                break; 
            }
        }
        for (int i = 1; i <= 1; i++) {
            printf("Cavalo se movimenta %d casa(s) para a direita!\n", i);
            break;  
        }
    }
        


int main() {
    
    int movimentoTorre = 5;
    printf("Movimento da torre: \n");
    torre(movimentoTorre);
    
    printf("\nMovimento da bispo:\n");
    bispo(1, 5);
    
    int movimentoRainha = 8;
    printf("\nMovimento da rainha:\n");
    rainha(movimentoRainha);
    
    printf("\nMovimento do cavalo:\n");
    cavalo();
    
    return 0;
}
