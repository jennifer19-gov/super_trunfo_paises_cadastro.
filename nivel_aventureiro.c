#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    scanf("%s", codigo1);
    scanf("%d", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontosTuristicos1);

    scanf("%s", codigo2);
    scanf("%d", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontosTuristicos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    printf("\nCarta 1 - %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibPerCapita1);

    printf("\nCarta 2 - %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibPerCapita2);

    return 0;
}
