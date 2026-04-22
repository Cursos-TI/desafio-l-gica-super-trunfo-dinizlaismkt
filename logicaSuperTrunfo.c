#include <stdio.h>
#include <string.h> // necessário para strcspn

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
    scanf("%c", &estadoA);

    printf("Insira o código:");
    scanf("%s", codigoA);

    getchar();


    printf("Insira o nome da cidade: ");
    fgets(nomedacidadeA, 30, stdin);
    nomedacidadeA[strcspn(nomedacidadeA, "\n")] = 0; // remove ENTER

    printf("Insira a população: ");
    scanf("%d", &populacaoA);

    printf("Insira a área: ");
    scanf("%f", &areaA);

    printf("Insira o PIB (em bilhões): ");
    scanf("%f", &pibA);

    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &turisticosA);

    densidadePopulacional1 = populacaoA / areaA;
    pibPerCapita1 = pibA / populacaoA;

    printf("\n");

    // -------- CARTA 2 --------
    char estado2;
    char codigo2[10] ="A02";
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    float densidadePopulacional2;
    float pibPerCapita2;

    printf("Insira o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Insira o codigo: ");
    scanf("%s", codigo2);

    getchar();

    printf("Insira o nome da cidade: ");
    fgets(nomedacidade2, 50, stdin);
    nomedacidade2[strcspn(nomedacidade2, "\n")] = 0;

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Insira a área da cidade: ");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &turisticos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("\n");

    // -------- EXIBIÇÃO --------
    printf("Carta 1 - %s\n", nomedacidadeA);
    printf("Densidade: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n\n", pibPerCapita1);

    printf("Carta 2 - %s\n", nomedacidade2);
    printf("Densidade: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n\n", pibPerCapita2);

    // -------- COMPARAÇÃO --------
    char cidadeVencedora[50];
// populção
    if (populacaoA > populacao2) {
        printf("Cidade 1 tem maior população.\n");
        strcpy(cidadeVencedora, nomedacidadeA);
    } else {
        printf("Cidade 2 tem maior população.\n");
        strcpy(cidadeVencedora, nomedacidade2);
    }

    printf("A cidade vencedora é: %s\n", cidadeVencedora);
// Área
if (areaA > area2) {
    printf("Área: Carta 1 venceu (%s)\n", nomedacidadeA);
} else {
    printf("Área: Carta 2 venceu (%s)\n", nomedacidade2);
}

// PIB
if (pibA > pib2) {
    printf("PIB: Carta 1 venceu (%s)\n", nomedacidadeA);
} else {
    printf("PIB: Carta 2 venceu (%s)\n", nomedacidade2);
}

// Pontos turísticos
if (turisticosA > turisticos2) {
    printf("Pontos turísticos: Carta 1 venceu (%s)\n", nomedacidadeA);
} else {
    printf("Pontos turísticos: Carta 2 venceu (%s)\n", nomedacidade2);
}

// Densidade populacional (MENOR vence)
if (densidadePopulacional1 < densidadePopulacional2) {
    printf("Densidade populacional: Carta 1 venceu (%s) [menor é melhor]\n", nomedacidadeA);
} else {
    printf("Densidade populacional: Carta 2 venceu (%s) [menor é melhor]\n", nomedacidade2);
}

// PIB per capita
if (pibPerCapita1 > pibPerCapita2) {
    printf("PIB per capita: Carta 1 venceu (%s)\n", nomedacidadeA);
} else {
    printf("PIB per capita: Carta 2 venceu (%s)\n", nomedacidade2);
}
    return 0;
}