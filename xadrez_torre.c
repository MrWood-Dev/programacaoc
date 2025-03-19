#include <stdio.h>

void moveTorreDireita(int casas) { // função recurssiva para movimento da torre
    while (casas<=5) {  //inicio do laço para o movimento da torre
       printf("%i-Direita\n", casas);
        casas++;
    }
}


int main() {

int t = 1; // variável com função contadora enviada para a função recurssiva
   
        moveTorreDireita(t);
        
    return 0; 

}   // fim do programa