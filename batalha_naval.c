#include <stdio.h>

int main() {

int tabuleiro[10][10];
int navioh[3]={3,4,5};
int naviov[3]={5,6,7};
int naviodl1[3]={9,8,7};
int naviodc1[3]={1,2,3};
int naviodl2[3]={7,6,5};
int naviodc2[3]={5,4,3};

    for(int l=0;l<10;l++) {
        for(int c=0;c<=9;c++){
            tabuleiro[l][c] = 0;
        }
    }


        for (int i = 0; i <=2; i++)
        {
            tabuleiro[3][navioh[i]]=3;
        }
        
        for (int i = 0; i <=2; i++)
        {
            tabuleiro[naviov[i]][7]=3;
        }

        for (int i = 0; i <=2; i++){
            tabuleiro[naviodl1[i]][naviodc1[i]]=3;
        }

        for (int i = 0; i <=2; i++){
            tabuleiro[naviodl2[i]][naviodc2[i]]=3;
        }

        
        for (int l = 0;l<10;l++){
            for(int c=0;c<10;c++){
                printf("%i\t", tabuleiro[l][c]);
            }
            printf("\n\n");
        }
       

        
}