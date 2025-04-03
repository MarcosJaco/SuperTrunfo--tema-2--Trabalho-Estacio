#include <stdio.h>

int main()
{
    char estado1, estado2, codigocarta1[10], codigocarta2[10], nomecidade1[50], nomecidade2[50];
    int pontosturisticos1, pontosturisticos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;

    printf("### Super Trunfo Em C - Tema 2 ###\n\n");

    // Cadastramento dos dados da Carta 1
    printf("Cadastro Carta 1:\n");
    printf("Digite uma letra entre A e H para o Estado:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01, B03):\n");
    scanf(" %s", codigocarta1);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomecidade1);
    printf("Digite a população:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área (km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB (em Reais):\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);
    
    densidadepopulacional1 = ((float)populacao1 / area1);
    pibpercapita1 = (pib1 / (float)populacao1);

    // Cadastramento dos dados da Carta 2
    printf("\nCadastro Carta 2:\n");
    printf("Digite uma letra entre A e H para o Estado:\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01, B03):\n");
    scanf(" %s", codigocarta2);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomecidade2);
    printf("Digite a população:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB (em Reais):\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);
    
    densidadepopulacional2 = ((float)populacao2 / area2);
    pibpercapita2 = (pib2 / (float)populacao2);

    // Exibição dos dados das cartas
    printf("\nCarta 1: %s\n", nomecidade1);
    printf("Carta 2: %s\n", nomecidade2);
    
    int atributo1, atributo2;
    do {
        printf("\nEscolha dois atributos para comparar:\n");
        printf("1. População\n2. Área\n3. PIB\n4. Densidade Demográfica (menor valor vence)\n5. Pontos Turísticos\n");
        scanf("%d %d", &atributo1, &atributo2);
        if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5)
            printf("Erro: Escolha dois atributos diferentes entre 1 e 5!\n");
    } while (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5);
    
    float valores1[] = {populacao1, area1, pib1, densidadepopulacional1, pontosturisticos1};
    float valores2[] = {populacao2, area2, pib2, densidadepopulacional2, pontosturisticos2};
    
    float soma1 = valores1[atributo1 - 1] + valores1[atributo2 - 1];
    float soma2 = valores2[atributo1 - 1] + valores2[atributo2 - 1];
    
    printf("\nResultado:\n");
    printf("%s: %.2f + %.2f = %.2f\n", nomecidade1, valores1[atributo1 - 1], valores1[atributo2 - 1], soma1);
    printf("%s: %.2f + %.2f = %.2f\n", nomecidade2, valores2[atributo1 - 1], valores2[atributo2 - 1], soma2);
    
    if (soma1 > soma2)
        printf("%s venceu!\n", nomecidade1);
    else if (soma2 > soma1)
        printf("%s venceu!\n", nomecidade2);
    else
        printf("Empate!\n");
    
    return 0;
}
