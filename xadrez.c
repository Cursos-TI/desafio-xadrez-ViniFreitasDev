#include <stdio.h>

int main() {
    
    printf("Movimento da torre:\n");    

    int torre = 1;
    
    for (torre = 1; torre <= 5; torre++){
        printf("Torre se movimenta %d casa(s) para a direita!\n", torre);
    }
    
    printf("\nMovimento do bispo:\n");

    int bispo = 1;
   
    while (bispo <= 5){
        printf("Bispo se movimenta %d casa(s) para cima e para a direita!\n", bispo);
        bispo++;
    }

    
    printf("\nMovimento da rainha:\n");

    int rainha = 1;
    do
    {
        printf("Rainha se movimenta %d casa(s) para esquerda!\n", rainha);
        rainha++;
    } while (rainha <= 8);

    printf("\nMovimento do cavalo:\n");

    int cavalo_baixo = 2;
    int cavalo_esquerda = 1;

    int i;
    for (i = 0; i < cavalo_baixo; i++) {
        printf("Cavalo se movimenta %d casa(s) para baixo!\n", i + 1);

        if (i == cavalo_baixo - 1) {
            int j = 0;
            while (j < cavalo_esquerda) {
                printf("Cavalo se movimenta %d casa para esquerda!\n", j + 1);
                j++;
            }
        }
    }
    return 0;
}
