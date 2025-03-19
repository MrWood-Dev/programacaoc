#include <stdio.h>

void moveCavalocimaDireita(int v,int h) { // função que move o cavalo na diagonal para cima e para a direita
    for (h; h <= 1; h++) // inicio do laço para o movimento do cavalo
    {
        while (v <= 2)
        {
            printf("%i-cima\n", v); // move o cavalo para cima
            v++;
        }
        
        printf("%i - Direita\n",h); // move o cavalo uma casa para a direita
    }
}


int main() {

    int vertical = 1;
    int horizontal = 1;

    moveCavalocimaDireita(vertical,horizontal);
    
    return 0;
} // fim do programa