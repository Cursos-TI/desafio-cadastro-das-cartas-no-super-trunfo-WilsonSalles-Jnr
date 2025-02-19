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
    float area, pib, area_2, pib_2;

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

    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %.2f KM²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %i\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f reais", estado_2, codigoCarta_2, cidade_2, populacao_2, area_2, pib_2, pontosTuristicos_2, densidade_2, pibPerCapita_2);

    return 0;
}
