#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char Estado1, Codigo_da_Carta1[20], Nome_da_Cidade1[50];
    int População1, Pontos_Turísticos1;
    float Área1, PIB1;

    char Estado2, Codigo_da_Carta2[20], Nome_da_Cidade2[50];
    int População2, Pontos_Turísticos2;
    float Área2, PIB2;

  // Área para entrada de dados

    printf(" Cadastro da Carta 1:\n\n");
    
    printf("Digite a letra do Estado: \n");
    scanf("%c", &Estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", Codigo_da_Carta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nome_da_Cidade1);

    printf("Digite a População da Cidade: \n");
    scanf("%d", &População1);
    
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &Pontos_Turísticos1);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Área1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB1);
    printf("\n");
  
  // Área para exibição dos dados da cidade
    
    printf("Carta 1 cadastrada com sucesso!\n\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %d\n", População1);
    printf("Área: %.2f km²\n", Área1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turísticos1);

  // Área para entrada de dados

    printf("\n Cadastro da Carta 2:\n\n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", Codigo_da_Carta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nome_da_Cidade2);

    printf("Digite a População da Cidade: \n");
    scanf("%d", &População2);
    
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &Pontos_Turísticos2);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Área2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);
    printf("\n");

  // Área para exibição dos dados da cidade

    printf("Carta 2 cadastrada com sucesso!\n\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turísticos2);
    
    return 0;
}