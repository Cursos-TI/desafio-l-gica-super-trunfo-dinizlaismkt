#include <stdio.h>

int main() {

    // -------- CARTA 1 --------
    char estadoA;
    char codigoA[10];
    char nomedacidadeA[30];
    int populacaoA;
    float areaA;
    float pibA;
    int turisticosA;

    float densidadePopulacional1;
    float pibPerCapita1;

    printf("Insira o estado: ");
    scanf(" %c", &estadoA);

    printf("Insira o código (ex: A01): ");
    scanf("%s", codigoA);

    getchar(); // limpa buffer

    printf("Insira o nome da cidade: ");
    fgets(nomedacidadeA, 30, stdin);

    printf("Insira a população: ");
    scanf("%d", &populacaoA);

    printf("Insira a área: ");
    scanf("%f", &areaA);

    printf("Insira o PIB (em bilhões): ");
    scanf("%f", &pibA);

    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &turisticosA);

    // Cálculos CARTA 1
    densidadePopulacional1 = populacaoA / areaA;
    pibPerCapita1 = pibA / populacaoA;

    printf("\n");

    // -------- CARTA 2 --------
    char estado2;
    char codigo2[10];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    float densidadePopulacional2;
    float pibPerCapita2;

    printf("Insira o estado: ");
    scanf(" %c", &estado2);

    printf("Insira o codigo: ");
    scanf("%s", codigo2);

    getchar(); // limpa buffer

    printf("Insira o nome da cidade: ");
    fgets(nomedacidade2, 50, stdin);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Insira a área da cidade: ");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &turisticos2);

    // Cálculos CARTA 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("\n");

    // -------- EXIBIÇÃO --------
    printf("Carta 1 - %s", nomedacidadeA);
    printf("Densidade: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n\n", pibPerCapita1);

    printf("Carta 2 - %s", nomedacidade2);
    printf("Densidade: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

   
    // Comparação das cartas
    if (populacaoA > populacaoB) {
    printf("Cidade 1 tem maior população.\n");
    } else {
    printf("Cidade 2 tem maior população.\n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
