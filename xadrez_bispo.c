#include <stdio.h>

int main() {

int b = 1; // variável com a função contadora do loop 'do while'
    do { // inicio do laço para o movimento do bispo 
        printf("%i p/ Cima e\n",b); // move uma casa para cima
        printf("  Direita\n"); // move uma casa para a direita
        b++;
    } while (b < 6);
    

return 0;

}   // fim do programa