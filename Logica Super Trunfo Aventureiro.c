#include <stdio.h>

// Desafio Super Trunfo - Países


//Foi criada uma variável para cada dado inserido pelo usuário.
int main() {
    char nomePais1[50], nomePais2[50];
    int pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    unsigned long int populacao1, populacao2;

// Área para entrada de dados da carta 1

printf("*** Cadastre os dados da Carta 1 ***\n");

printf("\n");

printf("Digite o nome do país: ");
scanf("%s", nomePais1);
printf("\n");
printf("Digite a população do País: ");
scanf("%lu", &populacao1);
printf("\n");
printf("Digite a área total do País: ");
scanf("%f", &area1);
printf("\n");
printf("Digite o PIB do País: ");
scanf("%f", &pib1);
printf("\n");
printf("Digite o numero de pontos turísticos do País: ");
scanf("%d", &pontos1);

printf("\n");

densidade1 = populacao1 / area1; // Calculo da densidade populacional

// Área destinada a exibição dos dados da carta 1
printf("\n");

printf("Dados inseridos da carta 1: \n");
printf("\n");
printf("Nome do país: %s\n", nomePais1);
printf("População do País: %.2lu Hab\n", populacao1);
printf("Área total do País: %.2f km2\n", area1);
printf("PIB do País: %.3f (Trilhões de US$)\n", pib1);
printf("Número de pontos turísticos: %d\n", pontos1);
printf("Densidade Populacional: %.2f hab/km2\n", densidade1);

// Área para entrada de dados da carta 2
printf("\n");

printf("*** Cadastre os dados da Carta 2 ***\n");

printf("\n");

printf("Digite o nome do país: ");
scanf("%s", nomePais2);
printf("\n");
printf("Digite a população do País: ");
scanf("%lu", &populacao2);
printf("\n");
printf("Digite a área total do País: ");
scanf("%f", &area2);
printf("\n");
printf("Digite o PIB do País: ");
scanf("%f", &pib2);
printf("\n");
printf("Digite o numero de pontos turísticos do País: ");
scanf("%d", &pontos2);

printf("\n");

densidade2 = populacao2 / area2; // Calculo da densidade populacional

// Área destinada a exibição dos dados da carta 2
printf("\n");

printf("Dados inseridos da carta 2: \n");
printf("\n");
printf("Nome do país: %s\n", nomePais2);
printf("População do País: %.2lu Hab\n", populacao2);
printf("Área total do País: %.2f km2\n", area2);
printf("PIB do País: %.3f (Trilhões de US$)\n", pib2);
printf("Número de pontos turísticos: %d\n", pontos2);
printf("Densidade Populacional: %.2f hab/km2\n", densidade2);

}