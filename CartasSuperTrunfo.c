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
 int cdc2, populacao2, pontos2;
 float area, pib, densidade, pib2;
 float area2, pib02, densidade2, pib3;
 char nome[50];
 char nome2[50];
 
 printf("Insira os dados da primeira carta\n");
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

//Agora vamos inserir os dados da segunda carta
//Agora as variaveis tem o mesmo nome + o numero 2
//Exeto pela variavel "pib" ela sea adicionada 02 "pib02" e o pib per capita "pib3"
printf("Agora insira os dados da segunda carta\n");
printf("Digite o codigo da cidade\n");
scanf("%d" , &cdc2);

printf("Digite o nome da cidade\n");
scanf("%s" , &nome2);

printf("Digite o numero da populacao\n");
scanf("%d" , &populacao2);

printf("Digite a area da cidade\n");
scanf("%f" , &area2);

printf("Didite o numero de pontos turisticos\n");
scanf("%d" , &pontos2);

printf("DIgite o pib total:\n");
scanf("%f", &pib2);


densidade = populacao / area;
densidade2 = populacao2 / area2;
pib2 = pib / populacao;
pib3 = pib02 / pontos2;

printf("Eses sao os dados da primeira carta:\n");
printf("Codigo da cidade %d\n", cdc);
printf("Nome da cidade %s\n",nome);
printf("Populacao %d\n", populacao);
printf("Area %.3f\n", area);
printf("Pib %.3f\n", pib);
printf("Pontos turisticos %d \n", pontos);
printf("Densidade populacional %.3f \n",densidade);
printf("Pib per capita: %.3f \n", pib2);

printf("Eses sao os dados da segunda carta:\n");
printf("Codigo da cidade %d\n", cdc2);
printf("Nome da cidade %s\n",nome2);
printf("Populacao %d\n", populacao2);
printf("Area %.3f\n", area2);
printf("Pib %.3f\n", pib2);
printf("Pontos turisticos %d \n", pontos2);
printf("Densidade populacional %.3f \n",densidade2);
printf("Pib per capita: %.3f \n", pib3);

printf("Agora as cartas serao comparadas\n");
if (populacao > populacao2) {
    printf("A populacao da carta %d venceu\n", cdc);
}else {
    printf("A populacao da carta %d venceu\n", cdc2);
}
if (area > area2) {
    printf("A area da carta %d venceu\n",cdc);
}else {
    printf("A area da carta %d venceu\n", cdc2);
}
if (pib > pib02) {
    printf("O pib da carta %d venceu\n", cdc);
}else{
    printf("O pib da carta %d venceu\n", cdc2);
}
if(pontos > pontos2) {
    printf("A carta %d tem mais pontos turisticos\n", cdc);
}else{
    printf("A carta %d tem mais pontos turisticos\n", cdc2);
}
if(densidade < densidade2){
    printf("A densidade da carta %d venceu\n", cdc);
}else{
    printf("A densidade da carta %d venceu\n", cdc2);
}
if(pib2 > pib3){
    printf("o pib per capita da carta %d venceu\n", cdc);
}else{
    printf("O pib per capita da carta %f venceu\n", cdc2);
}
if(populacao + area + pib + pontos + densidade + pib2 > populacao2 + area2 + pib02 + pontos2 + densidade2 + pib3 ){
    printf("O super poder da carta %d venceu\n", cdc);
}else{
    printf("O super poder da carta %d venceu\n", cdc2);
}
return 0;



  
    
}
