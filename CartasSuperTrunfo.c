#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {

    // CARTA 1
    char estado1;
    char codigo1[4];  
    char cidade1[20];
    int populacao1;
    float areakm1;
    float pib1;
    int pontosT1;

    // CARTA 2
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float areakm2;
    float pib2;
    int pontosT2;

    // Boas-vindas
    printf("Bem vindo ao primeiro projeto feito por mim.\n");
    printf("Nele vamos cadastrar e exibir as cartas de Super Trunfo.\n");
    printf("Voce vai receber as instrucoes para cadastrar logo abaixo.\n\n");

    // CARTA 1 
    printf("sPrimeira Carta\n");

    printf("Qual o estado da carta? (A-H)\n");
    scanf(" %c", &estado1);  

    printf("Qual o codigo da carta? (Ex: A01)\n");
    scanf("%s", codigo1);

    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade1);

    printf("Qual e a populacao da cidade?\n");
    scanf("%d", &populacao1);

    printf("Qual a area por Km² da cidade?\n");
    scanf("%f", &areakm1);

    printf("Qual e o PIB da cidade?\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos existem?\n");
    scanf("%d", &pontosT1);

    // CARTA 2 
    printf("\nSegunda Carta\n");

    printf("Qual o estado da carta? (A-H)\n");
    scanf(" %c", &estado2);

    printf("Qual o codigo da carta? (Ex: A01)\n");
    scanf("%s", codigo2);

    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade2);

    printf("Qual e a populacao da cidade?\n");
    scanf("%d", &populacao2);

    printf("Qual a area por Km² da cidade?\n");
    scanf("%f", &areakm2);

    printf("Qual e o PIB da cidade?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos existem?\n");
    scanf("%d", &pontosT2);

    // EXIBICAO
    printf("\n\nExibicao das Cartas\n");

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", areakm1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosT1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", areakm2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosT2);

    return 0;
}
