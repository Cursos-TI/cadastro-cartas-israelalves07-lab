#include <stdio.h>

int main() {

    // -------- Carta 1 --------
    char estado1;
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;   
    float area1;
    float pib1;
    int pontos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // -------- Carta 2 --------
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;  
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    //  Entrada Carta 1 
    printf("Carta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);   

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    //  Entrada Carta 2 
    printf("\nCarta 2\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);   

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    //  Cálculos 
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;

    // Super Poder  
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    //  Comparações 
    int compPopulacao = populacao1 > populacao2;
    int compArea = area1 > area2;
    int compPIB = pib1 > pib2;
    int compPontos = pontos1 > pontos2;
    int compDensidade = densidade1 < densidade2;  
    int compPIBperCapita = pibPerCapita1 > pibPerCapita2;
    int compSuperPoder = superPoder1 > superPoder2;

    // ====== Resultado ======
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: %d\n", compPopulacao);
    printf("Area: %d\n", compArea);
    printf("PIB: %d\n", compPIB);
    printf("Pontos Turisticos: %d\n", compPontos);
    printf("Densidade Populacional: %d\n", compDensidade);
    printf("PIB per Capita: %d\n", compPIBperCapita);
    printf("Super Poder: %d\n", compSuperPoder);

    return 0;
}

