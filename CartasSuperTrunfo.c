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
    int escolha1, escolha2;
    char resultado1[100], resultado2[100];

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
    scanf("%d", &escolha1);

    int r1,r2;
    switch (escolha1)
    {
        case 1:
            printf("População\n");
            r1 = (populacao1 > populacao2) ? 1 : ((populacao1 < populacao2) ? 3 : 2);
            snprintf(resultado1, sizeof(resultado1), "População:\nCarta 1: %lu\nCarta 2: %lu\n", populacao1,populacao2);
            break;
        case 2:
            printf("Área\n");
            r1 = (area1 > area2) ? 1 : ((area1 < area2) ? 3 : 2);
            snprintf(resultado1, sizeof(resultado1), "Área:\nCarta 1: %.2f km²\nCarta 2: %.2f km²\n", area1,area2);
            break;
        case 3:
            printf("PIB\n");
            r1 = (pib1 > pib2) ? 1 : ((pib1 < pib2) ? 3 : 2);
            snprintf(resultado1, sizeof(resultado1), "PIB:\nCarta 1: R$%.2f\nCarta 2: R$%.2f\n", pib1,pib2);
            break;
        case 4:
            printf("Pontos turísticos\n");
            r1 = (pTuristico1 > pTuristico2) ? 1 : ((pTuristico1 < pTuristico2) ? 3 : 2);
            snprintf(resultado1, sizeof(resultado1), "Pontos turísticos:\nCarta 1: %d\nCarta 2: %d\n", pTuristico1,pTuristico2);
            break;
        case 5:
            printf("Densidade Populacional\n");
            r1 = (densidadeP1 < densidadeP2) ? 1 : ((densidadeP1 > densidadeP2) ? 3 : 2);
            snprintf(resultado1, sizeof(resultado1), "Densidade Populacional:\nCarta 1: %.2f hab/km²\nCarta 2: %.2f hab/km²\n", densidadeP1,densidadeP2);
            break;
        case 6:
            printf("PIB per Capita\n");
            r1 = (pibPerCapita1 > pibPerCapita2) ? 1 : ((pibPerCapita1 < pibPerCapita2) ? 3 : 2);
            snprintf(resultado1, sizeof(resultado1), "PIB per Capita:\nCarta 1: R$%.2f\nCarta 2: R$%.2f\n", pibPerCapita1,pibPerCapita2);
            break;
        case 7:
            printf("Super Poder\n");
            r1 = (super1 > super2) ? 1 : ((super1 < super2) ? 3 : 2);
            snprintf(resultado1, sizeof(resultado1), "Super Poder:\nCarta 1: %.2f\nCarta 2: %.2f\n", super1,super2);
        break;
        default:
            printf("Valor inválido");
        break;
    }
    
    printf("Escolha outro atributo para ser comparado\n");
    printf("1 -> População\n2 -> Área\n3 -> PIB\n4 -> Pontos turísticos\n");
    printf("5 -> Densidade Populacional\n6 -> PIB per Capita\n7 -> Super Poder\n");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
        printf("Você escolheu o mesmo atributo");
    } else {
        switch (escolha2)
        {
        case 1:
            printf("População\n");
            r2 = (populacao1 > populacao2) ? 1 : ((populacao1 < populacao2) ? 3 : 2);
            snprintf(resultado2, sizeof(resultado2), "População:\nCarta 1: %lu\nCarta 2: %lu\n", populacao1,populacao2);
            break;
        case 2:
            printf("Área\n");
            r2 = (area1 > area2) ? 1 : ((area1 < area2) ? 3 : 2);
            snprintf(resultado2, sizeof(resultado2), "Área:\nCarta 1: %.2f km²\nCarta 2: %.2f km²\n", area1,area2);
            break;
        case 3:
            printf("PIB\n");
            r2 = (pib1 > pib2) ? 1 : ((pib1 < pib2) ? 3 : 2);
            snprintf(resultado2, sizeof(resultado2), "PIB:\nCarta 1: R$%.2f\nCarta 2: R$%.2f\n", pib1,pib2);
            break;
        case 4:
            printf("Pontos turísticos\n");
            r2 = (pTuristico1 > pTuristico2) ? 1 : ((pTuristico1 < pTuristico2) ? 3 : 2);
            snprintf(resultado2, sizeof(resultado2), "Pontos turísticos:\nCarta 1: %d\nCarta 2: %d\n", pTuristico1,pTuristico2);
            break;
        case 5:
            printf("Densidade Populacional\n");
            r2 = (densidadeP1 < densidadeP2) ? 1 : ((densidadeP1 > densidadeP2) ? 3 : 2);
            snprintf(resultado2, sizeof(resultado2), "Densidade Populacional:\nCarta 1: %.2f hab/km²\nCarta 2: %.2f hab/km²\n", densidadeP1,densidadeP2);
            break;
        case 6:
            printf("PIB per Capita\n");
            r2 = (pibPerCapita1 > pibPerCapita2) ? 1 : ((pibPerCapita1 < pibPerCapita2) ? 3 : 2);
            snprintf(resultado2, sizeof(resultado2), "PIB per Capita:\nCarta 1: R$%.2f\nCarta 2: R$%.2f\n", pibPerCapita1,pibPerCapita2);
            break;
        case 7:
            printf("Super Poder\n");
            r2 = (super1 > super2) ? 1 : ((super1 < super2) ? 3 : 2);
            snprintf(resultado2, sizeof(resultado2), "Super Poder:\nCarta 1: %.2f\nCarta 2: %.2f\n", super1,super2);
            break;
        default:
            printf("Valor inválido");
            break;
        }
    }
    //resultados
    printf("\n%s vs %s\n",nomeCidade1,nomeCidade2);
    printf("%s\n%s\n", resultado1,resultado2);
    if (r1 == 1 && r2 == 1) {
        printf("Carta 1 venceu\n");  // Carta 1 vence em ambos os critérios
    } 
    else if (r1 == 3 && r2 == 3) {
        printf("Carta 2 venceu\n");  // Carta 2 vence em ambos os critérios
    } 
    else if ((r1 == 1 && r2 == 3) || (r1 == 3 && r2 == 1)) {
        printf("Empate\n");  // Critérios opostos → empate
    } 
    else {
        // Casos onde pelo menos um critério é empate (2)
        if (r1 == 1 || r2 == 1) {
            printf("Carta 1 venceu\n");  // Pelo menos um critério é vitória da Carta 1
        } 
        else if (r1 == 3 || r2 == 3) {
            printf("Carta 2 venceu\n");  // Pelo menos um critério é vitória da Carta 2
        } 
        else {
            printf("Empate\n");  // Ambos são empate (r1 == 2 && r2 == 2)
        }
    }
    return 0;
}
