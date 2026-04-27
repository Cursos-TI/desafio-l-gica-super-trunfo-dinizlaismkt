#include <stdio.h>
#include <string.h>

int main() {

    // -------- CARTA 1 --------
    char estadoA;
    char codigo1[10] = "A01";
    char nomedacidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    float densidadePopulacional1;
    float pibPerCapita1;

    printf("Insira o estado da carta 1: ");
    scanf(" %c", &estadoA);

    printf("Insira o código: ");
    scanf("%s", codigo1);

    getchar();

    printf("Insira o nome da cidade: ");
    fgets(nomedacidade1, 30, stdin);
    nomedacidade1[strcspn(nomedacidade1, "\n")] = 0;

    printf("Insira a população: ");
    scanf("%d", &populacao1);

    printf("Insira a área: ");
    scanf("%f", &area1);

    printf("Insira o PIB: ");
    scanf("%f", &pib1);

    printf("Insira os pontos turísticos: ");
    scanf("%d", &turisticos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("\n");

    // -------- CARTA 2 --------
    char estado2;
    char codigo2[10] = "A02";
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    float densidadePopulacional2;
    float pibPerCapita2;

    printf("Insira o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Insira o código: ");
    scanf("%s", codigo2);

    getchar();

    printf("Insira o nome da cidade: ");
    fgets(nomedacidade2, 50, stdin);
    nomedacidade2[strcspn(nomedacidade2, "\n")] = 0;

    printf("Insira a população: ");
    scanf("%d", &populacao2);

    printf("Insira a área: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    printf("Insira os pontos turísticos: ");
    scanf("%d", &turisticos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("\n");

    // -------- MENU --------
    int primeiroatributo, segundoatributo;
    int resultado1 = 0, resultado2 = 0;

    printf("===== MENU DE COMPARAÇÃO =====\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Escolha: ");
    scanf("%d", &primeiroatributo);

    // -------- SWITCH 1 --------
    switch(primeiroatributo) {

        case 1:
            printf("Você escolheu População\n");
            resultado1 = populacao1 > populacao2;
            break;

        case 2:
            printf("Você escolheu Área\n");
            resultado1 = area1 > area2;
            break;

        case 3:
            printf("Você escolheu PIB\n");
            resultado1 = pib1 > pib2;
            break;

        case 4:
            printf("Você escolheu Pontos Turísticos\n");
            resultado1 = turisticos1 > turisticos2;
            break;

        case 5:
            printf("Você escolheu Densidade Populacional (menor vence)\n");
            resultado1 = densidadePopulacional1 < densidadePopulacional2;
            break;

        case 6:
            printf("Você escolheu PIB per capita\n");
            resultado1 = pibPerCapita1 > pibPerCapita2;
            break;

        default:
            printf("Opção inválida!\n");
    }

    printf("\n===== SEGUNDO ATRIBUTO =====\n");
    printf("Escolha o segundo atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Escolha: ");
    scanf("%d", &segundoatributo);

    if (primeiroatributo == segundoatributo) {
        printf("Você escolheu o mesmo atributo. Encerrando jogo.\n");
        return 0;
    }

    // -------- SWITCH 2 --------
    switch (segundoatributo) {

        case 1:
            printf("Segundo atributo: População\n");
            resultado2 = populacao1 > populacao2;
            break;

        case 2:
            printf("Segundo atributo: Área\n");
            resultado2 = area1 > area2;
            break;

        case 3:
            printf("Segundo atributo: PIB\n");
            resultado2 = pib1 > pib2;
            break;

        case 4:
            printf("Segundo atributo: Pontos Turísticos\n");
            resultado2 = turisticos1 > turisticos2;
            break;

        case 5:
            printf("Segundo atributo: Densidade (menor vence)\n");
            resultado2 = densidadePopulacional1 < densidadePopulacional2;
            break;

        case 6:
            printf("Segundo atributo: PIB per capita\n");
            resultado2 = pibPerCapita1 > pibPerCapita2;
            break;

        default:
            printf("Opção inválida!\n");
    }

    // -------- RESULTADO FINAL --------
    printf("\n===== RESULTADO FINAL =====\n");

    if (resultado1 && resultado2) {
        printf("Carta 1 venceu! (%s)\n", nomedacidade1);
    } 
    else if (!resultado1 && !resultado2) {
        printf("Carta 2 venceu! (%s)\n", nomedacidade2);
    } 
    else {
        printf("Empate!\n");
    }

    return 0;
}