#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
  
 int cdc ;
 int populacao;
 int pontos;
 float area;
 float pib;
 char cidade[20];
 
printf("Digite o codigo da cidade\n");
scanf("%d" , &cdc);

printf("Digite o nome da cidade\n");
scanf("%s" , &cidade);

printf("Digite o numero da populacao\n");
scanf("%d" , &populacao);

printf("Digite a area da cidade\n");
scanf("%f" , &area);

printf("Didite o numero de pontos turisticos\n");
scanf("%d" , &pontos);

printf("Digite o pib da cidade\n");
scanf("%f", &pib);

printf("Codigo da cidade %d\n", cdc);
printf("Nome da cidade %s\n",cidade);
printf("Populacao %d\n", populacao);
printf("Area%f\n", area);
printf("Pib%f\n", pib);
printf("Pontos turisticos %d", pontos);





  
    
}
