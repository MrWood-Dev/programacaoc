#include <stdio.h>


// função para testar se a posição está ocupada antes de posicionar o navio e se o navio se encontra nos limites do tabuleiro
int testaNavio(int tabuleiro[10][10],int linha,int coluna){
    if (linha >= 1 && linha <= 10) {
        if (coluna >=1 && coluna <= 10)
        {
            return tabuleiro[linha][coluna]==0;
        } else {
            return 0;
        }
        
        
    }else {
        return 0;
    }    
}


int main() {

int tabuleirocone[10][10];
int tabuleirocruz[10][10];
int tabuleiroocta[10][10];
int tabuleiro[10][10];
int navioh[3]={3,4,5};
int naviov[3]={5,6,7};
int naviodl1[3]={9,8,7};
int naviodc1[3]={1,2,3};
int naviodl2[3]={7,6,5};
int naviodc2[3]={5,4,3};
int teste = 0;


    // prepara o tabuleiro com zeros

    for(int l=0;l<10;l++) {
        for(int c=0;c<=9;c++){
            tabuleiro[l][c] = 0;
        }
    }

    // prepara o tabuleiro do cone

    for(int l=0;l<10;l++) {
        for(int c=0;c<=9;c++){
            tabuleirocone[l][c] = 0;
        }
    }

    // prepara o tabuleiro da cruz

    for (int l=0;l<10;l++)
    {
        for(int c=0;c<=9;c++){
            tabuleirocruz[l][c] = 0;
        }
    }

    // prepara o tabuleiro do octaedro

    for (int l=0;l<10;l++)
    {
        for(int c=0;c<=9;c++){
            tabuleiroocta[l][c] = 0;
        }
    }
    

        // posiciona os navios testando a sobreposição ao anteriormente criado

        // posiciona o navio horizontal na linha 3
        for (int j = 0; j <=2; j++)
        {
            if (testaNavio(tabuleiro,3,navioh[j])){
            teste++;
            }
            if (teste==3) {
                for (int j = 0; j <=2; j++)
                {       
                    tabuleiro[3][navioh[j]]=1;
                }
                teste=0;
            }
        }


        // posiciona o navio vertical na coluna 7
        for (int i = 0; i <=2; i++)
        {
            if (testaNavio(tabuleiro,naviov[i],7)){
            teste++;
            }
            if (teste==3) {
                for (int i = 0; i <=2; i++)
                {       
                    tabuleiro[naviov[i]][7]=2;
                }
                teste=0;
            }
        }

        // posiciona o primeiro navio diagonal        
        for (int i = 0; i <=2; i++)
        {
            if (testaNavio(tabuleiro,naviodl1[i],naviodc1[i])){
            teste++;
            }
            if (teste==3) {
                for (int i = 0; i <=2; i++)
                {       
                    tabuleiro[naviodl1[i]][naviodc1[i]]=3;
                }
                teste=0;
            }
        }

        // posiciona o segundo navio diagonal
        for (int i = 0; i <=2; i++)
        {
            if (testaNavio(tabuleiro,naviodl2[i],naviodc2[i])){
            teste++;
            }
            if (teste==3) {
                for (int i = 0; i <=2; i++)
                {       
                    tabuleiro[naviodl2[i]][naviodc2[i]]=4;
                }
                teste=0;
            }
        }

        // preparando o cone
        int vezes = 0;
        int coluna = 4;
        int alturacone = 6;
        for (int i = 0; i < alturacone; i++)
        {
            for (int j = 0; j <= vezes; j++)
            {
                printf("eu passei aqui %i vezes\n", j);
                tabuleirocone[i][coluna+j]=1;
            }
            coluna-=1;
            vezes+=2;
            printf("\n\n");
        }

        // preparando a cruz
        
        for (int i = 0, j = 4; i < 10; i++)
        {
            tabuleirocruz[i][j]=1;
            tabuleirocruz[i][j+1]=1;
            tabuleirocruz[j][i]=1;
            tabuleirocruz[j+1][i]=1;
        }

        // preparando o octaedro
        vezes = 0;
        coluna = 4;
        int alturaduplaocta=6;
        for (int cima = 0, baixo = 9; cima < alturaduplaocta; cima++, baixo--)
        {
            for (int j = 0; j <= vezes; j++)
            {
                tabuleiroocta[cima][coluna+j]=1;
                tabuleiroocta[baixo][coluna+j]=1;
            }
            coluna-=1;
            vezes+=2;
            printf("\n\n");
        }

        
        // preparando a apresentação dos cabeçalhos
        char cabecalho[11]={'A','B','C','D','E','F','G','H','I','J'};
        printf("\t\t");
        for (int i=0; i<10; i++ ){
            printf("%c", cabecalho[i]);
            
        }

        printf("\t\t");

        for (int i=0; i<10; i++ ){
            printf("%c", cabecalho[i]);
            
        }

        printf("\t\t");
        
        for (int i=0; i<10; i++ ){
            printf("%c", cabecalho[i]);
            
        }

        printf("\t\t");
        
        for (int i=0; i<10; i++ ){
            printf("%c", cabecalho[i]);
            
        }

        // apresentando os tabuleiros
        printf("\n\t");
        for (int l = 0;l<10;l++){
            printf("%i\t",l+1);
            for(int c=0;c<10;c++){
                printf("%i", tabuleiro[l][c]);
            }
            printf("\t\t");
            for(int c=0;c<10;c++){
                printf("%i", tabuleirocone[l][c]);
            }
            printf("\t\t");
            for(int c=0;c<10;c++){
                printf("%i", tabuleirocruz[l][c]);
            }
            printf("\t\t");
            for(int c=0;c<10;c++){
                printf("%i", tabuleiroocta[l][c]);
            }
            printf("\n\t");

        }
       

        
} // fim do programa