#include <stdio.h>

int main(){

  char estado1 [10];
  char codigo1 [5];
  char cidade1 [20];
  int populacao1;
  int pontoturistico1;
  float area1;
  float pib1;

  char estado2 [10];
  char codigo2 [5];
  char cidade2 [20];
  int populacao2;
  int pontoturistico2;
  float area2;
  float pib2;

  int carta1, carta2;

  printf("Digite seu estado: \n");
  scanf("%s", &estado1);
  printf("Digite seu estado: \n");
  scanf("%s", &estado2);

  printf("Codigo: \n");
  scanf("%s", &codigo1);
  printf("Codigo: \n");
  scanf("%s", &codigo1);

  printf("Nome da cidade: \n");
  scanf("%s", &cidade1);
  printf("Nome da cidade: \n");
  scanf("%s", &cidade2);

  printf("Total de habitantes: \n");
  scanf("%d", &populacao1);
  printf("Total de habitantes: \n");
  scanf("%d", &populacao2);

  printf("Area: \n");
  scanf("%f", &area1);
  printf("Area: \n");
  scanf("%f", &area2);

  printf("pib: \n");
  scanf("%f", &pib1);
  printf("pib: \n");
  scanf("%f", &pib2);

  printf("Quantidade de pontos turisticos: \n");
  scanf("%d", &pontoturistico1);
  printf("Quantidade de pontos turisticos: \n");
  scanf("%d", &pontoturistico2);

  // DADOS DA CARTA 1
  
  printf("Carta 1! \n");
  printf("Estado: %s \n", estado1);
  printf("Codigo da carta: %s \n", codigo1);
  printf("Cidade: %s \n", cidade1);
  printf("Habitantes: %d \n", populacao1);
  printf("Area: %f \n", area1);
  printf("Pib: %f \n", pib1);
  printf("Pontos turisticos: %d \n", pontoturistico1);

  // DADOS DA CARTA 2

  printf("Carta 2! \n");
  printf("Estado: %s \n", estado2);
  printf("Codigo da carta: %s \n", codigo2);
  printf("Cidade: %s \n", cidade2);
  printf("Habitantes: %d \n", populacao2);
  printf("Area: %f \n", area2);
  printf("Pib: %f \n", pib2);
  printf("Pontos turisticos: %d \n", pontoturistico2);
  
  return 0;

}