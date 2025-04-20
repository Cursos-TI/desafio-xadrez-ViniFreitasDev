#include <stdio.h>

int main() {
    
    printf("Movimento da torre:/n");    
    int torre = 1;
    
    for (torre = 1; torre <= 5; torre++){
        printf("Torre se movimenta %d casa(s) para a direita!\n", torre);
    }
    
    pintf("Movimento do bispo:\n");
    int bispo = 1;
   
    while (bispo <= 5){
        printf("Bispo se movimenta %d casa(s) para cima e para a direita!/n", bispo);
        bispo++;
    }

    
    printf("Movimento da rainha:\n");
    int rainha = 1;
    do
    {
        printf("Rainha se movimenta %d casa(s) para esquerda!\n", rainha);
        rainha++;
    } while (rainha <= 8);
    
    
    return 0;
}
