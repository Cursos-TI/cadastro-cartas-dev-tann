#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char Estado1, Codigo_da_Carta1[20], Nome_da_Cidade1[50];
    unsigned long int Populacao1; 
    int Pontos_Turisticos1;
    float Area1, PIB1, Densidade1, PIBcapita1, Superpoder1;

    char Estado2, Codigo_da_Carta2[20], Nome_da_Cidade2[50];
    unsigned long int Populacao2;
    int Pontos_Turisticos2;
    float Area2, PIB2, Densidade2, PIBcapita2, Superpoder2;

  // Área para entrada de dados

    printf(" Cadastro da Carta 1:\n\n");
    
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &Estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", Codigo_da_Carta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nome_da_Cidade1);

    printf("Digite a População da Cidade: \n");
    scanf("%u", &Populacao1);
    
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &Pontos_Turisticos1);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB1);
    printf("\n");

    Densidade1 = (float) Populacao1 / Area1;
    PIBcapita1 = (PIB1 *1000000000) / (float) Populacao1;
    Superpoder1 = (float) Populacao1 + (float) Pontos_Turisticos1 + Area1 + PIB1 + PIBcapita1 + (float) (1/Densidade1);

  // Área para exibição dos dados da cidade
    
    printf("Carta 1 cadastrada com sucesso!\n\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBcapita1);
    printf("Super Poder: %.2f\n", Superpoder1);

  // Área para entrada de dados

    printf("\n Cadastro da Carta 2:\n\n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", Codigo_da_Carta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nome_da_Cidade2);

    printf("Digite a População da Cidade: \n");
    scanf("%u", &Populacao2);
    
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &Pontos_Turisticos2);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);
    printf("\n");

    Densidade2 = (float) Populacao2 / Area2;
    PIBcapita2 = (PIB2 *1000000000) / (float) Populacao2; 
    Superpoder2 = (float) Populacao2 + (float) Pontos_Turisticos2 + Area2 + PIB2 + PIBcapita2 + (float) (1/Densidade2);

  // Área para exibição dos dados da cidade

    printf("Carta 2 cadastrada com sucesso!\n\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBcapita2);
    printf("Super Poder: %.2f\n", Superpoder2);

    printf("\nAperte Enter para iniciar a comparação!\n");
    getchar();
    getchar();

    printf("--- Comparação de Cartas ---\n");
    printf("População: %s\n", (Populacao1 > Populacao2) ? "Carta 1 vence" : (Populacao1 < Populacao2) ? "Carta 2 vence" : "Empate");
    printf("Área: %s\n", (Area1 > Area2) ? "Carta 1 vence" : (Area1 < Area2) ? "Carta 2 vence" : "Empate");
    printf("PIB: %s\n", (PIB1 > PIB2) ? "Carta 1 vence" : (PIB1 < PIB2) ? "Carta 2 vence" : "Empate");
    printf("Pontos Turísticos: %s\n", (Pontos_Turisticos1 > Pontos_Turisticos2) ? "Carta 1 vence" : (Pontos_Turisticos1 < Pontos_Turisticos2) ? "Carta 2 vence" : "Empate");
    printf("Densidade Populacional: %s\n", (Densidade1 > Densidade2) ? "Carta 2 vence" : (Densidade1 < Densidade2) ? "Carta 1 vence" : "Empate");
    printf("PIB per Capita: %s\n", (PIBcapita1 > PIBcapita2) ? "Carta 1 vence" : (PIBcapita1 < PIBcapita2) ? "Carta 2 vence" : "Empate");
    printf("Super Poder: %s\n", (Superpoder1 > Superpoder2) ? "Carta 1 vence" : (Superpoder1 < Superpoder2) ? "Carta 2 vence" : "Empate");

    return 0;
}