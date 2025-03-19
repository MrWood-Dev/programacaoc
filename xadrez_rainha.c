#include <stdio.h>

void moveRainhaDireita(int casas) { // função que move a rainha para a direita
    for (casas; casas <= 5; casas++) // inicio do laço para o movimento da rainha
    {
        printf("%i - Direita\n", casas);
    } 
}


int main() {

    int r = 1;
    moveRainhaDireita(r);
        
    return 0;
} // fim do programa