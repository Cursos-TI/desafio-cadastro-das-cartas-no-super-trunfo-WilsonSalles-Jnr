#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
  // Sugestão: Defina variáveis separadas para cada atributo da cidade.
  // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

  // Cadastro das Cartas:
  // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
  // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

  // Exibição dos Dados das Cartas:
  // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
  // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  char estado, estado_2;
  char cidade[20], cidade_2[20];
  char codigoCarta[3], codigoCarta_2[3];
  int populacao, pontosTuristicos, populacao_2, pontosTuristicos_2;
  float area, pib, superPoder, area_2, pib_2, superPoder_2;

  printf("Digite os dados da primeira carta\n");

  printf("Estado: ");
  scanf(" %c", &estado);
  printf("Código da Carta: ");
  scanf("%s", codigoCarta);
  printf("Nome da Cidade: ");
  scanf("%s", cidade);
  printf("População: ");
  scanf("%i", &populacao);
  printf("Área (em km²): ");
  scanf("%f", &area);
  printf("PIB: ");
  scanf("%f", &pib);
  printf("Número de Pontos Turísticos: ");
  scanf("%i", &pontosTuristicos);

  float densidade = populacao / area;
  float pibPerCapita = (pib / populacao) * 1000000000;
  superPoder = populacao + pontosTuristicos + area + pib + densidade + pibPerCapita;

  printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %.2f KM²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %i\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f reais", estado, codigoCarta, cidade, populacao, area, pib, pontosTuristicos, densidade, pibPerCapita);

  printf("\nDigite os dados da segunda carta\n");

  printf("Estado: ");
  scanf(" %c", &estado_2);
  printf("Código da Carta: ");
  scanf("%s", codigoCarta_2);
  printf("Nome da Cidade: ");
  scanf("%s", cidade_2);
  printf("População: ");
  scanf("%i", &populacao_2);
  printf("Área (em km²): ");
  scanf("%f", &area_2);
  printf("PIB: ");
  scanf("%f", &pib_2);
  printf("Número de Pontos Turísticos: ");
  scanf("%i", &pontosTuristicos_2);

  float densidade_2 = populacao_2 / area_2;
  float pibPerCapita_2 = (pib_2 / populacao_2) * 1000000000;
  superPoder_2 = populacao_2 + pontosTuristicos_2 + area_2 + pib_2 + densidade_2 + pibPerCapita_2;

  printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %.2f KM²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %i\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f reais\n", estado_2, codigoCarta_2, cidade_2, populacao_2, area_2, pib_2, pontosTuristicos_2, densidade_2, pibPerCapita_2);

  printf("Comparação de Cartas:\n");
  printf("Selectione uma das seguintes opções para comparação:\n");
  printf("1 - População\n");
  printf("2 - Pontos turísticos\n");
  printf("3 - Area\n");
  printf("4 - PIB\n");
  printf("5 - PIB per Capita\n");
  printf("6 - Densidade\n");
  printf("7 - Super Poder\n");

  int opcao;

  int compararPopulacao = populacao_2 > populacao;
  int compararPontosTuristicos = pontosTuristicos_2 > pontosTuristicos;
  int compararArea = area_2 > area;
  int compararPib = pib_2 > pib;
  int compararPibPerCapita = pibPerCapita_2 > pibPerCapita;
  int compararDensidade = densidade_2 < densidade;
  int compararSuperPoder = superPoder_2 > superPoder;

  scanf("%i", &opcao);
  char defaultMessage[100] = "Carta 1: %s\t\tCarta 2:%s\nAtributo selecionado: %s\nCarta 1: %d\t\tCarta 2: %d\n";

  int valor_1;
  int valor_2;
  int invalido = 0;

  switch (opcao)
  {
  case 1:
    valor_1 = populacao;
    valor_2 = populacao_2;
    printf(defaultMessage, cidade, cidade_2, "População", valor_1, valor_2);
    break;
  case 2:
    valor_1 = pontosTuristicos;
    valor_2 = pontosTuristicos_2;
    printf(defaultMessage, cidade, cidade_2, "Pontos Turísticos", valor_1, valor_2);
    break;
  case 3:
    valor_1 = area;
    valor_2 = area_2;
    printf(defaultMessage, cidade, cidade_2, "Área", valor_1, valor_2);
    break;
  case 4:
    valor_1 = pib;
    valor_2 = pib_2;
    printf(defaultMessage, cidade, cidade_2, "PIB", valor_1, valor_2);
    break;
  case 5:
    valor_1 = pibPerCapita;
    valor_2 = pibPerCapita_2;
    printf(defaultMessage, cidade, cidade_2, "PIB per capita", valor_1, valor_2);
    break;
  case 6:
    valor_1 = densidade_2;
    valor_2 = densidade;
    printf(defaultMessage, cidade, cidade_2, "Densidade", valor_2, valor_1);
    break;
  case 7:
    valor_1 = superPoder;
    valor_2 = superPoder_2;
    printf(defaultMessage, cidade, cidade_2, "Super poder", valor_1, valor_2);
    break;
  default:
    invalido = 1;
  }

  if (invalido)
  {
    printf("Operação inválida");
  }
  else if (valor_1 > valor_2)
  {
    printf("Carta vencedora: 1");
  }
  else if (valor_1 < valor_2)
  {
    printf("Carta vencedora 2");
  }
  else
  {
    printf("Empate!");
  }

  return 0;
}
