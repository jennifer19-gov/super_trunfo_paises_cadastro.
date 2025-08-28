#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[4];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Carta 2
    char codigo2[4];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Entrada Carta 1
    printf("Cadastro da Carta 1\n");
    scanf("%s", codigo1);
    scanf("%d", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontosTuristicos1);

    // Entrada Carta 2
    printf("Cadastro da Carta 2\n");
    scanf("%s", codigo2);
    scanf("%d", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontosTuristicos2);

    // Saída
    printf("\nCarta 1 - %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2 - %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
