#include <stdio.h>



float calculaDensPopulacao(float populacao,float area) { //função para cálculo da densidade populacional das cidades
    
    float densidade;
    densidade = populacao/area;
    return(densidade);
}

float calculaPib(float pib,float populacao) { // função para cálculo da PIB percapita das cidades

    float pibPerCapita;
    pibPerCapita = pib/populacao;
    return(pibPerCapita);
}

int main() {

    // inicializando as variáveis da carta 1
    char estadoC1;
    char codigoC1[4];
    char nomecidadeC1[20];
    int populacaoC1;
    float areaC1;
    float pibC1;
    int ptsturC1;
    float densidadePopC1;
    float pibPerCapitaC1;


    // inicializando as variaveis da carta 2
    char estadoC2;
    char codigoC2[4];
    char nomecidadeC2[20];
    int populacaoC2;
    float areaC2;
    float pibC2;
    int ptsturC2;
    float densidadePopC2;
    float pibPerCapitaC2;


    // solicitando os dados da carta 1
    printf ("Digite os dados da Carta 1\n\n");
    printf ("Estado :");
    scanf ("%c", &estadoC1);
    printf ("\nCódigo da carta 1 :");
    scanf ("%s", &codigoC1);
    printf ("\nNome da cidade :");
    fflush(stdin);
    fgets (nomecidadeC1, 20, stdin);
    printf ("\nPopulação da cidade :");
    scanf ("%i", &populacaoC1);
    printf ("\nÁrea da cidade em Km2 :");
    scanf ("%f", &areaC1);
    printf ("\nPIB da cidade :");
    scanf ("%f", &pibC1);
    printf ("\nQuantidade de pontos turísticos :");
    scanf ("%i", &ptsturC1);
    densidadePopC1 = calculaDensPopulacao(populacaoC1,areaC1);
    pibPerCapitaC1 = calculaPib(pibC1,populacaoC1);    

    printf ("\n\n\n\n");

    // solicitando os dados da carta 2
    printf ("Digite os dados da Carta 2\n\n");
    printf ("Estado :");
    scanf (" %c", &estadoC2);
    printf ("\nCódigo da carta 2 :");
    scanf ("%s", &codigoC2);
    printf ("\nNome da cidade :");
    fflush(stdin);
    fgets (nomecidadeC2, 20, stdin);
    printf ("\nPopulação da cidade :");
    scanf ("%i", &populacaoC2);
    printf ("\nÁrea da cidade em Km2:");
    scanf ("%f", &areaC2);
    printf ("\nPIB da cidade :");
    scanf ("%f", &pibC2);
    printf ("\nQuantidade de pontos turísticos :");
    scanf ("%i", &ptsturC2);
    densidadePopC2 = calculaDensPopulacao(populacaoC2,areaC2);
    pibPerCapitaC2 = calculaPib(pibC2,populacaoC2);

    printf ("\n\n\n\n");

    // Apresentação em tela dos dados da carta 1 
    printf ("Carta 1:\n");
    printf ("Estado : %c\n", estadoC1);
    printf ("Código da carta : %s\n", codigoC1);
    printf ("Cidade : %s", nomecidadeC1);
    printf ("População : %i\n", populacaoC1);
    printf ("Área : %f Km2\n", areaC1);
    printf ("PIB : %f bilhões de reais\n", pibC1);
    printf ("Quantidade de Pontos turísticos : %i\n", ptsturC1);
    printf ("Densidade Populacional : %f hab/km2\n", densidadePopC1);
    printf ("PIB per Capita : %f reais\n", pibPerCapitaC1);
    

    printf ("\n\n\n\n");

    
    // Apresentação em tela dos dados da carta 2
    printf ("Carta 2:\n");
    printf ("Estado : %c\n", estadoC2);
    printf ("Código da carta : %s\n", codigoC2);
    printf ("Cidade : %s", nomecidadeC2);
    printf ("População : %i\n", populacaoC2);
    printf ("Área : %f Km2\n", areaC2);
    printf ("PIB : %f bilhões de reais\n", pibC2);
    printf ("Quantidade de Pontos turísticos : %i\n", ptsturC2);
    printf ("Densidade Populacional : %f hab/km2\n", densidadePopC2);
    printf ("PIB per Capita : %f reais\n", pibPerCapitaC2);






   return 0; //fim do programa

}