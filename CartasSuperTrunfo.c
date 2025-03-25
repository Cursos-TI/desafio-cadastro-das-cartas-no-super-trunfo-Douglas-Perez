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
    float super1, super2; //Super poder
    int escolha;
    char* resultado;

    //Cadastrar a primeira carta
    printf("Vamos cadastrar a primeira carta!\n");
    printf("Digite a letra identificadora do estado (A até H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (Ex: A02): ");
    scanf("%s", codigo1);
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
    scanf("%s", codigo2);
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

    //Calcular a densidade populacional
    densidadeP1 = (float) populacao1/area1;
    densidadeP2 = (float) populacao2/area2;

    //Calcular a PIB per capita
    pibPerCapita1 = (float) pib1/populacao1;
    pibPerCapita2 = (float) pib2/populacao2;

    //Calcular super poder
    super1 = (float) populacao1 + area1 + pib1 + pTuristico1 + (1/densidadeP1) + pibPerCapita1;
    super2 = (float) populacao2 + area2 + pib2 + pTuristico2 + (1/densidadeP2) + pibPerCapita2;

    //Exibir cartas na tela:
    //Carta 1:
    printf("Carta 1\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %lu\n",estado1,codigo1,nomeCidade1,populacao1);
    printf("Área: %.2f km²\nPIB: R$ %.2f\nPontos turísticos: %d\n",area1,pib1,pTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n",densidadeP1,pibPerCapita1);
    printf("Super Poder: %.2f\n\n",super1);

    //Carta 2:
    printf("Carta 2\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %lu\n",estado2,codigo2,nomeCidade2,populacao2);
    printf("Área: %.2f km²\nPIB: R$ %.2f\nPontos turísticos: %d\n",area2,pib2,pTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n",densidadeP2,pibPerCapita2);
    printf("Super Poder: %.2f\n\n",super2);

    //Escolha do jogador
    printf("Escolha um dos atributos para ser comparado\n");
    printf("1 -> População\n2 -> Área\n3 -> PIB\n4 -> Pontos turísticos\n");
    printf("5 -> Densidade Populacional\n6 -> PIB per Capita\n7 -> Super Poder\n");
    scanf("%d", &escolha);

    //resultados
    print("%s vs %s",nomeCidade1,nomeCidade2);
    switch (escolha)
    {
    case 1:
        print("População!");
        print("Carta 1: %lu\nCarta 2: %lu", populacao1,populacao2);
        if (populacao1 > populacao2)
            resultado = "Carta 1 venceu";
        if (populacao1 < populacao2)
            resultado = "Carta 2 venceu";
        if (populacao1 == populacao2)
            resultado = "Empate!";
        printf("%s\n",resultado);
        break;
    case 2:
        print("Área!");
        print("Carta 1: %.2f km²\nCarta 2: %.2f km²", area1,area2);
        if (area1 > area2)
            resultado = "Carta 1 venceu";
        if (area1 < area2)
            resultado = "Carta 2 venceu";
        if (area1 == area2)
            resultado = "Empate!";
        printf("%s\n",resultado);
        break;
    case 3:
        print("PIB!");
        print("Carta 1: R$%.2f\nCarta 2: R$%.2f", pib1,pib2);
        if (pib1 > pib2)
            resultado = "Carta 1 venceu";
        if (pib1 < pib2)
            resultado = "Carta 2 venceu";
        if (pib1 == pib2)
            resultado = "Empate!";
        printf("%s\n",resultado);
        break;
    case 4:
        print("Pontos Turísticos!");
        print("Carta 1: %d\nCarta 2: %d", pTuristico1,pTuristico2);
        if (pTuristico1 > pTuristico2)
            resultado = "Carta 1 venceu";
        if (pTuristico1 < pTuristico2)
            resultado = "Carta 2 venceu";
        if (pTuristico1 == pTuristico2)
            resultado = "Empate!";
        printf("%s\n",resultado);
        break;
    case 5:
        print("Densidade Populacional!");
        print("Carta 1: %.2f hab/km²\nCarta 2: %.2f hab/km²", densidadeP1,densidadeP2);
        if (densidadeP1 < densidadeP2)
            resultado = "Carta 1 venceu";
        if (densidadeP1 > densidadeP2)
            resultado = "Carta 2 venceu";
        if (densidadeP1 == densidadeP2)
            resultado = "Empate!";
        printf("%s\n",resultado);
        break;
    case 6:
        print("PIB per Capita!");
        print("Carta 1: R$%.2f\nCarta 2: R$%.2f", pibPerCapita1,pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2)
            resultado = "Carta 1 venceu";
        if (pibPerCapita1 < pibPerCapita2)
            resultado = "Carta 2 venceu";
        if (pibPerCapita1 == pibPerCapita2)
            resultado = "Empate!";
        printf("%s\n",resultado);
        break;
    case 7:
        print("Super Poder!");
        print("Carta 1: %.2f\nCarta 2: %.2f", super1,super2);
        if (super1 > super2)
            resultado = "Carta 1 venceu";
        if (super1 < super2)
            resultado = "Carta 2 venceu";
        if (super1 == super2)
            resultado = "Empate!";
        printf("%s\n",resultado);
        break;
    default:
        printf("Valor inválido\n");
        break;
    }
    return 0;
}
