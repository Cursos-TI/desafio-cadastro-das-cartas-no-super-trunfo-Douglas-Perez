#include <stdio.h>

int main() {
    char estado1, estado2; //identificador do estado 
    char codigo1[4], codigo2[4]; //código da carta
    char nomeCidade1[24], nomeCidade2[24]; //nome da cidade
    int populacao1, populacao2; //hobitantes
    float area1, area2; //area em Km²
    float pib1, pib2; //PIB
    int pTuristico1, pTuristico2; //quantidade de pontos turisticos

    //Cadastrar a primeira carta
    printf("Vamos cadastrar a primeira carta!\n");
    printf("Digite a letra identificadora do estado (A até H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (Ex: A02): ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade (Não utilize espaços): ");
    scanf("%s", &nomeCidade1);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);
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
    printf("Digite o nome da cidade (Não utilize espaços): ");
    scanf("%s", &nomeCidade2);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto da cidade (PIB): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pTuristico2);
    printf("Carta 2 cadastrada com sucesso!\n\n");

    //Exibir cartas na tela:
    //Carta 1:
    printf("Carta 1\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %d\n",estado1,codigo1,nomeCidade1,populacao1);
    printf("Área: %.2f\nPIB: %.2f\nPontos turísticos: %d\n\n",area1,pib1,pTuristico1);

    //Carta 2:
    printf("Carta 2\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %d\n",estado2,codigo2,nomeCidade2,populacao2);
    printf("Área: %.2f\nPIB: %.2f\nPontos turísticos: %d\n",area2,pib2,pTuristico2);

    return 0;
}
