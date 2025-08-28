#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    scanf("%s", codigo1);
    scanf("%lu", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontosTuristicos1);

    scanf("%s", codigo2);
    scanf("%lu", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontosTuristicos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    printf("\nComparações (1 = Carta 1 vence, 0 = Carta 2 vence)\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
