#include <stdio.h>

// Desafio Super Trunfo - Países


//Foi criada uma variável para cada dado inserido pelo usuário.
int main() {
    char nomeCidade1[50], nomeCidade2[50], letraEstado1, letraEstado2, codigoCarta1[4], codigoCarta2[4];
    int pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapta1, pibpercapta2, superpoder1, superpoder2;
    unsigned long int populacao1, populacao2;
   

// Área para entrada de dados da carta 1

printf("Cadastre os dados da Carta 1:\n");

printf("\n");

printf("Digite a letra do estado(A-H): \n");
scanf("%c", &letraEstado1);
printf("Digite o código para a Carta (ex: A01,B03): \n");
scanf("%s", codigoCarta1);
printf("Digite o nome da cidade: \n");
scanf("%s", nomeCidade1);
printf("Digite a população da cidade: \n");
scanf("%lu", &populacao1);
printf("Digite a área total da cidade: \n");
scanf("%f", &area1);
printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);
printf("Digite o numero de pontos turísticos da cidade: \n");
scanf("%d", &pontos1);

printf("\n");

densidade1 = populacao1 / area1; // Calculo da densidade populacional
pibpercapta1 = pib1 / populacao1; // Calculo do PIB per capta
superpoder1 = area1 + pib1 + (float)populacao1 + (float)pontos1 + (float)(1 / densidade1); // Cálculo do superpoder da carta 1


// Área destinada a exibição dos dados da carta 1
printf("\n");
printf("Dados inseridos da carta 1: \n");
printf("Letra do estado: %c\n", letraEstado1);
printf("Código da carta: %s\n", codigoCarta1);
printf("Nome da cidade: %s\n", nomeCidade1);
printf("População da cidade: %lu\n", populacao1);
printf("Área total da cidade: %f km2\n", area1);
printf("PIB da cidade: %f Reais\n", pib1);
printf("Número de pontos turísticos: %d\n", pontos1);
printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
printf("PIB per Capta: %.2f Reais\n", pibpercapta1);
printf("Superpoder da carta: %.2f\n", superpoder1);

printf("\n"); 

// Área para entrada de dados da carta 2

printf("Cadastre os dados da Carta 2:\n");

printf("\n");

printf("Digite a letra do estado(A-H): \n");
scanf("%s", &letraEstado2);
printf("Digite o código para a Carta (ex: A01,B03): \n");
scanf("%s", codigoCarta2);
printf("Digite o nome da cidade: \n");
scanf("%s", nomeCidade2);
printf("Digite a população da cidade: \n");
scanf("%lu", &populacao2);
printf("Digite a área total da cidade: \n");
scanf("%f", &area2);
printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);
printf("Digite o numero de pontos turísticos da cidade: \n");
scanf("%d", &pontos2);

printf("\n");

densidade2 = populacao2 / area2; // Calculo da densidade populacional
pibpercapta2 = pib2 / populacao2; // Calculo do PIB per capta
superpoder2 = area2 + pib2 + (float)populacao2 + (float)pontos2 + (float)(1 / densidade2); // Cálculo do superpoder da carta 2

// Área destinada a exibição dos dados da carta 2
printf("\n");
printf("Dados inseridos da carta 2: \n");
printf("Letra do estado: %c\n", letraEstado2);
printf("Código da carta: %s\n", codigoCarta2);
printf("Nome da cidade: %s\n", nomeCidade2);
printf("População da cidade: %lu\n", populacao2);
printf("Área total da cidade: %.2f Km2\n", area2);
printf("PIB da cidade: %.2f Bilhões de Reais\n", pib2);
printf("Número de pontos turísticos: %d\n", pontos2);
printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
printf("PIB per Capta: %.2f Reais\n", pibpercapta1);
printf("Superpoder da carta: %.2f\n", superpoder2);

printf("\n");


// Área destinada a comparação dos atributos e exibição do resultado
printf("Comparação das cartas (Atributo: Nro de Pontos Turísticos\n"); 

printf("\n");

if (pontos1 > pontos2) {
    printf("A Carta 1 foi a vencedora!\n");
} else {
    printf("A carta 2 foi a vencedora!\n");
}
printf("\n");



return 0;
}