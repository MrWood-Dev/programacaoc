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
    double superPoderC1;


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
    double superPoderC2;
    
    int opcao;
    
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

    // calculo do superpoder da carta 1
    superPoderC1 = populacaoC1+areaC1+pibC1+ptsturC1+pibPerCapitaC1-densidadePopC1;

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

    // calculo do superpoder da carta 2
    superPoderC2 = (double) (populacaoC2+areaC2+pibC2+ptsturC2+pibPerCapitaC2-densidadePopC2);


    printf ("\n\n\n\n");

    // Seleção do atributo a ser comparado nas cartas

    printf("Qual atributo quer comparar?\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Superpoder\n");
    scanf("%i", &opcao);

    printf("\n\n\n");
    
    // Comparação das cartas no atributo selecionado

    switch (opcao)
    {
    case 1:
    
        if(populacaoC1 == populacaoC2) {
            printf("Empate das Cartas");
        }else if(populacaoC1 > populacaoC2) {
            printf("A Carta 1 %s Venceu!",nomecidadeC1);
        }else if(populacaoC2 > populacaoC1) {
            printf("A Carta 2 %s Venceu!",nomecidadeC2);
        }
    break;
    
    case 2:
        if(areaC1 == areaC2) {
            printf("Empate das Cartas");
        }else if(areaC1 > areaC2) {
            printf("A Carta 1 %s Venceu!",nomecidadeC1);
        }else if(areaC2 > areaC1) {
            printf("A Carta 2 %s Venceu!",nomecidadeC2);
        }
    break;
    
    case 3:
        if(pibC1 == pibC2) {
            printf("Empate das Cartas");
        }else if(pibC1 > pibC2) {
            printf("A Carta 1 %s Venceu!",nomecidadeC1);
        }else if(pibC2 > pibC1) {
            printf("A Carta 2  %s Venceu!",nomecidadeC2);
        }
    break;
    
    case 4:
        if(ptsturC1 == ptsturC2) {
            printf("Empate das Cartas");
        }else if(ptsturC1 > ptsturC2) {
            printf("A Carta 1 %s Venceu!",nomecidadeC1);
        }else if(ptsturC2 > ptsturC1) {
            printf("A Carta 2 %s Venceu!",nomecidadeC2);
        }
    break;
    
    case 5:
        if(densidadePopC1 == densidadePopC2) {
            printf("Empate das Cartas");
        }else if(densidadePopC1 < densidadePopC2) {
            printf("A Carta 1 %s Venceu!",nomecidadeC1);
        }else if(densidadePopC2 < densidadePopC1) {
            printf("A Carta 2 %s Venceu!",nomecidadeC2);
        }
    break;
    
    case 6:
        if(pibPerCapitaC1 == pibPerCapitaC2) {
            printf("Empate das Cartas");
        }else if(pibPerCapitaC1 > pibPerCapitaC2) {
            printf("A Carta 1 %s Venceu!",nomecidadeC1);
        }else if(pibPerCapitaC2 > pibPerCapitaC1) {
            printf("A Carta 2 %s Venceu!",nomecidadeC2);
        }
    break;
    
    case 7:
        if(superPoderC1 == superPoderC2) {
            printf("Empate das Cartas");
        }else if(superPoderC1 > superPoderC2) {
            printf("A Carta 1 %s Venceu!",nomecidadeC1);
        }else if(superPoderC2 > superPoderC1) {
            printf("A Carta 2 %s Venceu!",nomecidadeC2);
        }
    break;
    
    default:
            printf("Atributo inválido!!");
    break;
    }
    




   return 0; //fim do programa

}