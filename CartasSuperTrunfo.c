#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2; //identificador do estado 
    char codigo1[4], codigo2[4]; //código da carta
    char nomeCidade1[24], nomeCidade2[24]; //nome da cidade
    unsigned long int populacao1, populacao2; //hobitantes
    float area1, area2; //area em Km²
    float pib1, pib2; //PIB
    int pTuristico1, pTuristico2; //quantidade de pontos turisticos
    float densidadeP1, densidadeP2; //densidade populacional
    float pibPerCapita1, pibPerCapita2; //PIB per Capita

    //Cadastrar a primeira carta
    printf("Vamos cadastrar a primeira carta!\n");
    printf("Digite a letra identificadora do estado (A até H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (Ex: A02): ");
    scanf("%s", &codigo1);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);
    printf("Digite o Produto Interno Bruto da cidade (PIB): ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pTuristico1);
    printf("Carta 1 cadastrada com sucesso!\n\n");

    //Cadastrar a segunda carta:
    printf("Vamos cadastrar a segunda carta!\n");
    printf("Digite a letra identifcadora do estado (A até H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (Ex: A02): ");
    scanf("%s", &codigo2);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto da cidade (PIB): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pTuristico2);
    printf("Carta 2 cadastrada com sucesso!\n\n");

    //Calcular a densidade populacional e o PIB per capita
    densidadeP1 = (float) populacao1/area1;
    densidadeP2 = (float) populacao2/area2;

    pibPerCapita1 = (float) pib1/populacao1;
    pibPerCapita2 = (float) pib2/populacao2;

    //Exibir cartas na tela:
    //Carta 1:
    printf("Carta 1\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %lu\n",estado1,codigo1,nomeCidade1,populacao1);
    printf("Área: %.2f km²\nPIB: R$ %.2f\nPontos turísticos: %d\n",area1,pib1,pTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n\n",densidadeP1,pibPerCapita1);

    //Carta 2:
    printf("Carta 2\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %lu\n",estado2,codigo2,nomeCidade2,populacao2);
    printf("Área: %.2f km²\nPIB: R$ %.2f\nPontos turísticos: %d\n",area2,pib2,pTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n\n",densidadeP2,pibPerCapita2);

    return 0;
}
