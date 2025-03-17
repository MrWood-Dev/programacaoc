#include <stdio.h>
#include <stdlib.h>


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

int main() 
{

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
    
    // inicializando variáveis utilizadas nos menus interativos
    int opcao1;
    int opcao2;

    // inicializando variaveis utilizadas nas comparações
    float somaC1;
    float somaC2;

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

    // solicitando o primeiro atributo

    printf("Escolha o 1° atributo da carta?\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Superpoder\n");
    scanf(" %i", &opcao1);
    printf("\na opcao1 tem o valor %i\n", opcao1);
 
    // inicio do enlace para criação do menu interativo e escolha do segundo atributo
    //  enlace 'if else' e 'switch' para comparação dos atributos escolhidos

    if (opcao1 == 1) 
    {
        printf("Escolha o 2° atributo da carta?\n\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per capita\n");
        printf("7 - Superpoder\n");
        scanf(" %i", &opcao2);

        switch (opcao2)
        {
            case 2:
            somaC1 = (populacaoC1+areaC1);
            somaC2 = (populacaoC2+areaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Área: %f \n",populacaoC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Área: %f \n",populacaoC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Área: %f \n",populacaoC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Área: %f \n",populacaoC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;
            
            case 3: 
            somaC1 = (populacaoC1+pibC1);
            somaC2 = (populacaoC2+pibC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Área: %f \n",populacaoC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Área: %f \n",populacaoC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Área: %f \n",populacaoC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Área: %f \n",populacaoC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 4:
            somaC1 = (populacaoC1+ptsturC1);
            somaC2 = (populacaoC2+ptsturC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Pontos Turísticos: %f \n",populacaoC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Pontos Turísticos: %f \n",populacaoC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Pontos Turísticos: %f \n",populacaoC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Pontos Turísticos: %f \n",populacaoC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            
            break;

            case 5:
            somaC1 = (populacaoC1-densidadePopC1);
            somaC2 = (populacaoC2-densidadePopC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Área: %f \n",populacaoC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Área: %f \n",populacaoC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Área: %f \n",populacaoC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Área: %f \n",populacaoC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 6:
            somaC1 = (populacaoC1+pibPerCapitaC1);
            somaC2 = (populacaoC2+pibPerCapitaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Área: %f \n",populacaoC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Área: %f \n",populacaoC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Área: %f \n",populacaoC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Área: %f \n",populacaoC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 7:
            somaC1 = (populacaoC1+superPoderC1);
            somaC2 = (populacaoC2+superPoderC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Área: %f \n",populacaoC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Área: %f \n",populacaoC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("População: %i e Área: %f \n",populacaoC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("População: %i e Área: %f \n",populacaoC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;
            default:
            printf("Atributo Inválido!");
        }
    } else if (opcao1 == 2)
    {
        printf("Escolha o 2° atributo da carta?\n\n");
        printf("1 - População\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per capita\n");
        printf("7 - Superpoder");
        scanf(" %i", &opcao2);

        switch (opcao2) 
        {
            case 1:
            somaC1 = (areaC1+populacaoC1);
            somaC2 = (areaC2+populacaoC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e População: %i \n",areaC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e População: %i \n",areaC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e População: %i \n",areaC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e População: %i \n",areaC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC2);
            }
            break;
            
            case 3:
            somaC1 = (areaC1+pibC1);
            somaC2 = (areaC2+pibC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e PIB: %f \n",areaC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e PIB: %f \n",areaC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e PIB: %f \n",areaC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e PIB: %f \n",areaC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 4:
            somaC1 = (areaC1+ptsturC1);
            somaC2 = (areaC2+ptsturC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e Pontos Turisticos: %i \n",areaC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e Pontos Turisticos: %i \n",areaC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e Pontos Turisticos: %i \n",areaC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e Pontos Turisticos: %i \n",areaC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 5:
            somaC1 = (areaC1-densidadePopC1);
            somaC2 = (areaC2-densidadePopC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e Densidade Populacional: %f \n",areaC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e Densidade Populacional: %f \n",areaC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e Densidade Populacional: %f \n",areaC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e Densidade Populacional: %f \n",areaC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 6:
            somaC1 = (areaC1+pibPerCapitaC1);
            somaC2 = (areaC2+pibPerCapitaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e PIB per capita: %f \n",areaC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e PIB per capita: %f \n",areaC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e PIB per capita: %f \n",areaC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e PIB per capita: %f \n",areaC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 7:
            somaC1 = (areaC1+superPoderC1);
            somaC2 = (areaC2+superPoderC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e Super poder: %f \n",areaC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e Super poder: %f \n",areaC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Área: %f e Super poder: %f \n",areaC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Área: %f e Super poder: %f \n",areaC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;
            default:
            printf("Atributo Inválido!");
        }

    } else if (opcao1 == 3)
    {
        printf("Escolha o 2° atributo da carta?\n\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per capita\n");
        printf("7 - Superpoder\n");
        scanf(" %i", &opcao2);

        switch (opcao2) 
        {
            case 1:
            somaC1 = (pibC1+populacaoC1);
            somaC2 = (pibC2+populacaoC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e População: %i \n",pibC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e População: %i \n",pibC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e População: %i \n",pibC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e População: %i \n",pibC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC2);
            }
            break;
            
            case 2:
            somaC1 = (pibC1+areaC1);
            somaC2 = (pibC2+areaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e Área: %f \n",pibC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e Área: %f \n",pibC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e Área: %f \n",pibC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e Área: %f \n",pibC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 4:
            somaC1 = (pibC1+ptsturC1);
            somaC2 = (pibC2+ptsturC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e Pontos Turisticos: %i \n",pibC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e Pontos Turisticos: %i \n",pibC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e Pontos Turisticos: %i \n",pibC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e Pontos Turisticos: %i \n",pibC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 5:
            somaC1 = (pibC1-densidadePopC1);
            somaC2 = (pibC2-densidadePopC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e Densidade Populacional: %f \n",pibC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e Densidade Populacional: %f \n",pibC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e Densidade Populacional: %f \n",pibC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e Densidade Populacional: %f \n",pibC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 6:
            somaC1 = (pibC1+pibPerCapitaC1);
            somaC2 = (pibC2+pibPerCapitaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e PIB per capita: %f \n",pibC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e PIB per capita: %f \n",pibC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e PIB per capita: %f \n",pibC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e PIB per capita: %f \n",pibC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 7:
            somaC1 = (pibC1+superPoderC1);
            somaC2 = (pibC2+superPoderC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e Super poder: %f \n",pibC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e Super poder: %f \n",pibC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB: %f e Super poder: %f \n",pibC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB: %f e Super poder: %f \n",pibC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;
            default:
            printf("Atributo Inválido!");
        }
    } else if (opcao1 == 4)
    {
        printf("Escolha o 2° atributo da carta?\n\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per capita\n");
        printf("7 - Superpoder\n");
        scanf(" %i", &opcao2);

        switch (opcao2) 
        {
            case 1:
            somaC1 = (ptsturC1+populacaoC1);
            somaC2 = (ptsturC2+populacaoC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e População: %i \n",ptsturC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e População: %i \n",ptsturC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e População: %i \n",ptsturC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e População: %i \n",ptsturC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC2);
            }
            break;
            
            case 2:
            somaC1 = (ptsturC1+areaC1);
            somaC2 = (ptsturC2+areaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e Área: %f \n",ptsturC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e Área: %f \n",ptsturC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e Área: %f \n",ptsturC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e Área: %f \n",ptsturC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 3:
            somaC1 = (ptsturC1+pibC1);
            somaC2 = (ptsturC2+pibC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e PIB: %f \n",ptsturC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e PIB: %f \n",ptsturC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e PIB: %f \n",ptsturC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e PIB: %f \n",ptsturC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 5:
            somaC1 = (ptsturC1-densidadePopC1);
            somaC2 = (ptsturC2-densidadePopC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e Densidade Populacional: %f \n",ptsturC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e Densidade Populacional: %f \n",ptsturC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e Densidade Populacional: %f \n",ptsturC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e Densidade Populacional: %f \n",ptsturC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 6:
            somaC1 = (ptsturC1+pibPerCapitaC1);
            somaC2 = (ptsturC2+pibPerCapitaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e Pontos Turísticos: %f \n",ptsturC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e Pontos Turísticos: %f \n",ptsturC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e Pontos Turísticos: %f \n",ptsturC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e Pontos Turísticos: %f \n",ptsturC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 7:
            somaC1 = (ptsturC1+superPoderC1);
            somaC2 = (ptsturC2+superPoderC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e Super poder: %f \n",ptsturC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e Super poder: %f \n",ptsturC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Pontos Turísticos: %i e Super poder: %f \n",ptsturC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Pontos Turísticos: %i e Super poder: %f \n",ptsturC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;
            default:
            printf("Atributo Inválido!");
        }
    } else if (opcao1 == 5)
    {
        printf("Escolha o 2° atributo da carta?\n\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("6 - PIB per capita\n");
        printf("7 - Superpoder\n");
        scanf(" %i", &opcao2);
        

        switch (opcao2) 
        {
            case 1:
            somaC1 = (-densidadePopC1+populacaoC1);
            somaC2 = (-densidadePopC2+populacaoC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e População: %i \n",densidadePopC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e População: %i \n",densidadePopC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e População: %i \n",densidadePopC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e População: %i \n",densidadePopC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC2);
            }
            break;
            
            case 2:
            somaC1 = (-densidadePopC1+areaC1);
            somaC2 = (-densidadePopC2+areaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e Área: %f \n",densidadePopC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e Área: %f \n",densidadePopC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e Área: %f \n",densidadePopC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e Área: %f \n",densidadePopC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 3:
            somaC1 = (-densidadePopC1+pibC1);
            somaC2 = (-densidadePopC2+pibC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e PIB: %f \n",densidadePopC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e PIB: %f \n",densidadePopC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e PIB: %f \n",densidadePopC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e PIB: %f \n",densidadePopC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;
            
            case 4:
            somaC1 = (-densidadePopC1+ptsturC1);
            somaC2 = (-densidadePopC2+ptsturC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e Pontos Turisticos: %i \n",densidadePopC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e Pontos Turisticos: %i \n",densidadePopC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e Pontos Turisticos: %i \n",densidadePopC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e Pontos Turisticos: %i \n",densidadePopC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 6:
            somaC1 = (-densidadePopC1+pibPerCapitaC1);
            somaC2 = (-densidadePopC2+pibPerCapitaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e PIB per capita: %f \n",densidadePopC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e PIB per capita: %f \n",densidadePopC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e PIB per capita: %f \n",densidadePopC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e PIB per capita: %f \n",densidadePopC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 7:
            somaC1 = (-densidadePopC1+superPoderC1);
            somaC2 = (-densidadePopC2+superPoderC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e Super poder: %f \n",densidadePopC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e Super poder: %f \n",densidadePopC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Densidade Populacional: %f e Super poder: %f \n",densidadePopC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Densidade Populacional: %f e Super poder: %f \n",densidadePopC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;
            default:
            printf("Atributo Inválido!");
        }
    } else if (opcao1 == 6)
    {
        printf("\n\nEscolha o 2° atributo da carta?\n\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("7 - Superpoder\n");
        scanf(" %i", &opcao2);

        switch (opcao2) 
        {
            case 1:
            somaC1 = (pibPerCapitaC1+populacaoC1);
            somaC2 = (pibPerCapitaC2+populacaoC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e População: %i \n",pibPerCapitaC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e População: %i \n",pibPerCapitaC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e População: %i \n",pibPerCapitaC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e População: %i \n",pibPerCapitaC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC2);
            }
            break;
            
            case 2:
            somaC1 = (pibPerCapitaC1+areaC1);
            somaC2 = (pibPerCapitaC2+areaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e Área: %f \n",pibPerCapitaC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e Área: %f \n",pibPerCapitaC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e Área: %f \n",pibPerCapitaC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e Área: %f \n",pibPerCapitaC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 3:
            somaC1 = (pibPerCapitaC1+pibC1);
            somaC2 = (pibPerCapitaC2+pibC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e PIB: %f \n",pibPerCapitaC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e PIB: %f \n",pibPerCapitaC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e PIB: %f \n",pibPerCapitaC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e PIB: %f \n",pibPerCapitaC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;
            
            case 4:
            somaC1 = (pibPerCapitaC1+ptsturC1);
            somaC2 = (pibPerCapitaC2+ptsturC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e Pontos Turisticos: %i \n",pibPerCapitaC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e Pontos Turisticos: %i \n",pibPerCapitaC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e Pontos Turisticos: %i \n",pibPerCapitaC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e Pontos Turisticos: %i \n",pibPerCapitaC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 5:
            somaC1 = (pibPerCapitaC1-densidadePopC1);
            somaC2 = (pibPerCapitaC2-densidadePopC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e Densidade Populacional: %f \n",pibPerCapitaC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e Densidade Populacional: %f \n",pibPerCapitaC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e Densidade Populacional: %f \n",pibPerCapitaC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e Densidade Populacional: %f \n",pibPerCapitaC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 7:
            somaC1 = (pibPerCapitaC1+superPoderC1);
            somaC2 = (pibPerCapitaC2+superPoderC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e Super poder: %f \n",pibPerCapitaC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e Super poder: %f \n",pibPerCapitaC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("PIB per capita: %f e Super poder: %f \n",pibPerCapitaC1,superPoderC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("PIB per capita: %f e Super poder: %f \n",pibPerCapitaC2,superPoderC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;
            default:
            printf("Atributo Inválido!");
        }
    } else if (opcao1 == 7)
    {
        printf("Escolha o 2° atributo da carta?\n\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per capita\n");
        scanf(" %i", &opcao2);

        switch (opcao2) 
        {
            case 1:
            somaC1 = (superPoderC1+populacaoC1);
            somaC2 = (superPoderC2+populacaoC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e População: %i \n",superPoderC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e População: %i \n",superPoderC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e População: %i \n",superPoderC1,populacaoC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e População: %i \n",superPoderC2,populacaoC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC2);
            }
            break;
            
            case 2:
            somaC1 = (superPoderC1+areaC1);
            somaC2 = (superPoderC2+areaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e Área: %f \n",superPoderC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e Área: %f \n",superPoderC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e Área: %f \n",superPoderC1,areaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e Área: %f \n",superPoderC2,areaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 3:
            somaC1 = (superPoderC1+pibC1);
            somaC2 = (superPoderC2+pibC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e PIB: %f \n",superPoderC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e PIB: %f \n",superPoderC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e PIB: %f \n",superPoderC1,pibC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e PIB: %f \n",superPoderC2,pibC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;
            
            case 4:
            somaC1 = (superPoderC1+ptsturC1);
            somaC2 = (superPoderC2+ptsturC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e Pontos Turisticos: %i \n",superPoderC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e Pontos Turisticos: %i \n",superPoderC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e Pontos Turisticos: %i \n",superPoderC1,ptsturC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e Pontos Turisticos: %i \n",superPoderC2,ptsturC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 5:
            somaC1 = (superPoderC1-densidadePopC1);
            somaC2 = (superPoderC2-densidadePopC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e Densidade Populacional: %f \n",superPoderC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e Densidade Populacional: %f \n",superPoderC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e Densidade Populacional: %f \n",superPoderC1,densidadePopC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e Densidade Populacional: %f \n",superPoderC2,densidadePopC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;

            case 6:
            somaC1 = (superPoderC1+pibPerCapitaC1);
            somaC2 = (superPoderC2+pibPerCapitaC2);
            if(somaC1 == somaC2) {
                printf("Empate das Cartas");
            }else if(somaC1 > somaC2) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e PIB per capita: %f \n",superPoderC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e PIB per capita: %f \n",superPoderC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 1 - %s Venceu!", nomecidadeC1);
            }else if(somaC2 > somaC1) {
                printf("%s\n",nomecidadeC1);
                printf("Super poder: %f e PIB per capita: %f \n",superPoderC1,pibPerCapitaC1);
                printf("Soma dos atributos : %.2f\n",somaC1);
                printf("%s\n",nomecidadeC2);
                printf("Super poder: %f e PIB per capita: %f \n",superPoderC2,pibPerCapitaC2);
                printf("Soma dos atributos : %.2f\n",somaC2);
                printf("A Carta 2 - %s Venceu!", nomecidadeC2);
            }
            break;
            default:
            printf("Atributo Inválido!");
        }
    }
    if (opcao1 < 1 || opcao1 > 7)
    {
        printf("Atributo inválido");
    }

return 0; //fim do programa

}