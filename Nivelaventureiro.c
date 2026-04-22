#include <stdio.h>
#include <string.h>

int main() {

    // -------- CARTA 1 --------
    char estadoA;
    char codigoA[10] = "A01";
    char nomedacidadeA[30];
    int populacaoA;
    float areaA;
    float pibA;
    int turisticosA;

    float densidadePopulacional1;
    float pibPerCapita1;

    printf("Insira o estado da carta 1: ");
    scanf(" %c", &estadoA);

    printf("Insira o código: ");
    scanf("%s", codigoA);

    getchar();

    printf("Insira o nome da cidade: ");
    fgets(nomedacidadeA, 30, stdin);
    nomedacidadeA[strcspn(nomedacidadeA, "\n")] = 0;

    printf("Insira a população: ");
    scanf("%d", &populacaoA);

    printf("Insira a área: ");
    scanf("%f", &areaA);

    printf("Insira o PIB: ");
    scanf("%f", &pibA);

    printf("Insira os pontos turísticos: ");
    scanf("%d", &turisticosA);

    densidadePopulacional1 = populacaoA / areaA;
    pibPerCapita1 = pibA / populacaoA;

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
    int opcao;

    printf("===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

   
    // -------- SWITCH --------
    switch(opcao) {

        case 1:
            if (populacaoA > populacao2)
                printf("Vencedor: %s\n", nomedacidadeA);
            else
                printf("Vencedor: %s\n", nomedacidade2);
            break;

        case 2:
            if (areaA > area2)
                printf("Vencedor: %s\n", nomedacidadeA);
            else
                printf("Vencedor: %s\n", nomedacidade2);
            break;

        case 3:
            if (pibA > pib2)
                printf("Vencedor: %s\n", nomedacidadeA);
            else
                printf("Vencedor: %s\n", nomedacidade2);
            break;

        case 4:
            if (turisticosA > turisticos2)
                printf("Vencedor: %s\n", nomedacidadeA);
            else
                printf("Vencedor: %s\n", nomedacidade2);
            break;

        case 5:
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Vencedor: %s (menor densidade)\n", nomedacidadeA);
            else
                printf("Vencedor: %s (menor densidade)\n", nomedacidade2);
            break;

        case 6:
            if (pibPerCapita1 > pibPerCapita2)
                printf("Vencedor: %s\n", nomedacidadeA);
            else
                printf("Vencedor: %s\n", nomedacidade2);
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}