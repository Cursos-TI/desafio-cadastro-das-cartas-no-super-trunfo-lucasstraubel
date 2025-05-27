#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
  char codigo cidade1[4]);
  int populacao;    
  float area 1;
  float pib; 1[4];
  int pontos turisticos1;  
  // declaraçao das variaveis para acarta 2;
  char codigo da cidade 2[4];
  int populaçao 2;
  float area 2;
  float pib 2;
  int pontos turisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // entrada dos dados da carta 1
    printf("Digite o codigo da carta 1");
    scanf("%s",codigo1);
    printf("digite a populaçao da cidade %s;",codigo1);
    scanf("%d", &populacao1);
    printf("Digite a area da cidade %s (em Km2:)", codigo1);
    scanf("%f",&area1);
    printf("Digite o Pib da cidade %s (em bilhoes):",codigo1);
    scanf("%f", & pib1);
    printf("Digite o numero de pontos turisticos da cidade %s/:",codigo1);
    scanf("%d",&pontos Turisticos1);


    // entrada dos dados da carta 2
    printf("\nDigite o codigo da carta 2");
    scanf("%s", codigo2);
    printf("Digite a populacao da cidade %s:",codigo2);
    scanf("%d",&populacao2);
    printf("Digite a area da cidade &s (em Km2): ",codigo2);
    printf("Digite o Pib da cidade %s ", codigo2);
    scanf("%f",&pib2);
    printf("Digite o numero de pontos turisticos da cidade %s:",codigo2);
    scanf("%d" , & pontos turisticos2);
    // saida dos dados carta 1
    printf("\n---DADOS DA CARTA 1 ---\n");
    printf("Codigo: %s\n",codigo1);
    printf("Populacao: %d\n,populacao");
    printf("Populacao: %.2f Km2\n",area1);
    printf("Pib: %.2f bilhoes\n",Pib1);
    printf("Pontos Turisticos: %d\n",Pontos Turisticos1);

    //Saida de Dados da Carta 2

    printf("\n---Dados da Carta 2 ---\n");
    printf("Codigo/: %s\n" , codigo2);
    printf("Populaçao: %d\n",codigo2);
    printf("Populaçao: %\n", populacao2);
    printf("Area: %2f Km2\n",pib2);
    printf("Pib: %.2f bilhoes\n", pontosTuristicos2);


    return 0;
}
