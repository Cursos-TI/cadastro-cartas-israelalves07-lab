#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1[3];
    char codigo1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ===== CARTA 2 =====
    char estado2[3];
    char codigo2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // -------- CADASTRO CARTA 1 --------
    printf("Carta 1\n");

    printf("Estado: ");
    scanf("%2s", estado1);

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // -------- CADASTRO CARTA 2 --------
    printf("\nCarta 2\n");

    printf("Estado: ");
    scanf("%2s", estado2);

    printf("Codigo da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== CALCULO DA DENSIDADE =====
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // ===== MENU INTERATIVO =====
    int opcao;

    printf("\n===== SUPER TRUNFO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando %s (%s) x %s (%s)\n\n",
           nomeCidade1, estado1, nomeCidade2, estado2);

    switch(opcao) {

        case 1:
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d\n", nomeCidade1, populacao1);
            printf("%s: %d\n", nomeCidade2, populacao2);

            if(populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else {
                if(populacao2 > populacao1) {
                    printf("Vencedor: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
        break;

        case 2:
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f\n", nomeCidade1, area1);
            printf("%s: %.2f\n", nomeCidade2, area2);

            if(area1 > area2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else {
                if(area2 > area1) {
                    printf("Vencedor: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
        break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f\n", nomeCidade1, pib1);
            printf("%s: %.2f\n", nomeCidade2, pib2);

            if(pib1 > pib2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else {
                if(pib2 > pib1) {
                    printf("Vencedor: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
        break;

        case 4:
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d\n", nomeCidade2, pontosTuristicos2);

            if(pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else {
                if(pontosTuristicos2 > pontosTuristicos1) {
                    printf("Vencedor: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
        break;

        case 5:
            printf("Atributo escolhido: Densidade Demografica\n");
            printf("%s: %.2f\n", nomeCidade1, densidade1);
            printf("%s: %.2f\n", nomeCidade2, densidade2);

            // REGRA INVERTIDA (MENOR VENCE)
            if(densidade1 < densidade2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else {
                if(densidade2 < densidade1) {
                    printf("Vencedor: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
        break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}