#include <stdio.h>

int main() {

    for (int h = 1; h <= 1; h++) // inicio do laço para o movimento horizontal do cavalo
    {
        int v = 1;
        while (v <= 2) // inicio do laço aninhado para o movimento vertical do cavalo
        {
            printf("%i-Baixo\t", v); // move o cavalo na vertical
            v++;
        }
        
        printf("\n%i-Esquerda\n\n",h); // move o cavalo na horizontal
    }
    
    return 0;
} // fim do programa