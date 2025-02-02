#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

//Densidade Populacional: População dividida pela área da cidade.
//PIB per capita: PIB total dividido pela população.

int main() {
  
 int cdc, populacao, pontos;
 float area, pib, densidade, pib2;
 char nome[50];
 
printf("Digite o codigo da cidade\n");
scanf("%d" , &cdc);

printf("Digite o nome da cidade\n");
scanf("%s" , &nome);

printf("Digite o numero da populacao\n");
scanf("%d" , &populacao);

printf("Digite a area da cidade\n");
scanf("%f" , &area);

printf("Didite o numero de pontos turisticos\n");
scanf("%d" , &pontos);

printf("DIgite o pib total:\n");
scanf("%f", &pib);

densidade = populacao / area;
pib2 = pib / populacao;

printf("Codigo da cidade %d\n", cdc);
printf("Nome da cidade %s\n",nome);
printf("Populacao %d\n", populacao);
printf("Area %.3f\n", area);
printf("Pib %.3f\n", pib);
printf("Pontos turisticos %d \n", pontos);
printf("Densidade populacional %.3f \n",densidade);
printf("Pib per capita: %.3f", pib2);

return 0;



  
    
}
