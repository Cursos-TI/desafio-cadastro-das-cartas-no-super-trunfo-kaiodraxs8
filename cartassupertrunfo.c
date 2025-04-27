#include <stdio.h>

int main(){
    printf("Desafio das cartas!\n");
    printf("Carta 1: \n");
      char Estado;
      char Código [50];
      char Cidade [50];
      int População;
      float Área (KM²);
      float PIB;
      int Pontos;

      printf("Digite a letra que representa o Estado: \n");
      scanf("%c", &Estado);

      printf("Digite o código da sua carta: \n");
      scanf("%s", &Código);

      printf("Digite o nome da cidade: \n");
      scanf("%s", &Cidade);

      printf("Digite o número de habitantes da cidade: \n");
      scanf("%d", &População);

      printf("Digite a área da cidade em km²: \n");
      scanf("%f", &Área);

      printf("Digite qual o valor do PIB da cidade: \n");
      scanf("%f", &PIB);

      printf("Digite qual a quantidade de pontos turísticos da cidade: \n");
      scanf("%d", &Pontos);

      printf("Estado: %c - Código: %s\n", Estado, Código);
      ptintf("Nome da cidade: %s - População: %d\n", Cidade, População);
      printf("Área (em km²): %f - PIB da cidade: %f - Número de pontos turísticos: %d", Área, PIB, Pontos);

      return 0;

}