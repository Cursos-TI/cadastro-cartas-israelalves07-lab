#include <stdio.h>

int main() {

    //  CARTAS PRÉ-CADASTRADAS (CIDADES) 

    char cidade1[] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 25;
    float densidade1 = 8080.00;

    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6700000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 18;
    float densidade2 = 5583.00;

    int opcao1, opcao2;
    float atributo1_c1 = 0, atributo1_c2 = 0;
    float atributo2_c1 = 0, atributo2_c2 = 0;
    float soma1, soma2;

    printf("===== SUPER TRUNFO - NIVEL MESTRE =====\n");

    //  PRIMEIRO MENU 
    printf("\nEscolha o PRIMEIRO atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    scanf("%d", &opcao1);

    switch(opcao1) {

        case 1:
            atributo1_c1 = populacao1;
            atributo1_c2 = populacao2;
            break;

        case 2:
            atributo1_c1 = area1;
            atributo1_c2 = area2;
            break;

        case 3:
            atributo1_c1 = pib1;
            atributo1_c2 = pib2;
            break;

        case 4:
            atributo1_c1 = pontosTuristicos1;
            atributo1_c2 = pontosTuristicos2;
            break;

        case 5:
            atributo1_c1 = densidade1;
            atributo1_c2 = densidade2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    //  COMPARAÇÃO INDIVIDUAL DO PRIMEIRO ATRIBUTO 
    printf("\nResultado do primeiro atributo:\n");

    if(opcao1 == 5) {  // Densidade -> menor vence
        if(atributo1_c1 < atributo1_c2)
            printf("Vencedor: %s\n", cidade1);
        else if(atributo1_c2 < atributo1_c1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate neste atributo!\n");
    } else {  // Maior vence
        if(atributo1_c1 > atributo1_c2)
            printf("Vencedor: %s\n", cidade1);
        else if(atributo1_c2 > atributo1_c1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate neste atributo!\n");
    }

    //  SEGUNDO MENU DINÂMICO 
    printf("\nEscolha o SEGUNDO atributo:\n");

    if(opcao1 != 1) printf("1 - Populacao\n");
    if(opcao1 != 2) printf("2 - Area\n");
    if(opcao1 != 3) printf("3 - PIB\n");
    if(opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if(opcao1 != 5) printf("5 - Densidade Demografica\n");

    scanf("%d", &opcao2);

    if(opcao2 == opcao1) {
        printf("Nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    switch(opcao2) {

        case 1:
            atributo2_c1 = populacao1;
            atributo2_c2 = populacao2;
            break;

        case 2:
            atributo2_c1 = area1;
            atributo2_c2 = area2;
            break;

        case 3:
            atributo2_c1 = pib1;
            atributo2_c2 = pib2;
            break;

        case 4:
            atributo2_c1 = pontosTuristicos1;
            atributo2_c2 = pontosTuristicos2;
            break;

        case 5:
            atributo2_c1 = densidade1;
            atributo2_c2 = densidade2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // COMPARAÇÃO INDIVIDUAL DO SEGUNDO ATRIBUTO 
    printf("\nResultado do segundo atributo:\n");

    if(opcao2 == 5) {
        if(atributo2_c1 < atributo2_c2)
            printf("Vencedor: %s\n", cidade1);
        else if(atributo2_c2 < atributo2_c1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate neste atributo!\n");
    } else {
        if(atributo2_c1 > atributo2_c2)
            printf("Vencedor: %s\n", cidade1);
        else if(atributo2_c2 > atributo2_c1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate neste atributo!\n");
    }

    // ===== SOMA DOS ATRIBUTOS =====
    soma1 = atributo1_c1 + atributo2_c1;
    soma2 = atributo1_c2 + atributo2_c2;

    // ===== RESULTADO FINAL =====
    printf("\n===== RESULTADO FINAL =====\n");
    printf("%s x %s\n\n", cidade1, cidade2);

    printf("Valores escolhidos:\n");
    printf("%s: %.2f e %.2f\n", cidade1, atributo1_c1, atributo2_c1);
    printf("%s: %.2f e %.2f\n\n", cidade2, atributo1_c2, atributo2_c2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n\n", cidade2, soma2);

    if(soma1 == soma2) {
        printf("Empate!\n");
    } else {
        int vencedor = (soma1 > soma2) ? 1 : 2;
        printf("Vencedor da rodada: %s\n", vencedor == 1 ? cidade1 : cidade2);
    }

    return 0;
}