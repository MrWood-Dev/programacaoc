#include <stdio.h>

void moveBispoCimaDireita(int casas) { // função recurssiva que move bispo para cima e para a direita
    while(casas<=5) {// laço mais externo para movimento vertical
        printf("%i p/ Cima e\n",casas);
            do { // laço mais interno para movimento horizontal
                printf("%i p/ Direita e\n",casas);
            } while (casas < 1);
        casas++;
    }
    
     // move uma casa para cima
}


int main() {

int b = 1; // variável com a função contadora enviada para a função recurssiva
    
    moveBispoCimaDireita(b);
    
return 0;

}   // fim do programa