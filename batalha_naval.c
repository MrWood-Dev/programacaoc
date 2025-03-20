#include <stdio.h>

int main() {

int tabuleiro[10][10];

    for(int l=0;l<=9;l++) {
        for(int c=0;c<=9;c++){
            tabuleiro[l][c] = 0;
            if(l==3 && c==3 || l==3 && c==4 || l==3 && c==5) {
                tabuleiro[l][c] = 3;
            } 
            if (l==5 && c==7 || l==6 && c==7 || l==7 && c==7) {
                tabuleiro[l][c] = 3;
            }
            printf("%i\t",tabuleiro[l][c]);
        }
        printf("\n\n");
    }
}