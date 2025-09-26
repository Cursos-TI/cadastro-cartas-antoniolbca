#include <stdio.h>

int main() {
    // Variaveis da carta 1
    char estado, codigo[4], cidade[15];
    int populacao, pontosTuristicos;
    float area, pib;

    // Variaveis da carta 2
    char estado2, codigo2[4], cidade2[15];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    printf("Preencha os dados da primeira carta \n"); // Aqui o programa faz a leitura dos dados que usuário der entrada no teclado, que serão armazenados nas variáveis correspondentes.

    printf("Digite o estado (uma letra): \n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: \n");
    scanf(" %3s", codigo);

    printf("Digite a cidade (ate 14 caracteres): \n");
    scanf(" %14s", cidade);

    printf("Digite a populacao: \n");
    scanf(" %i", &populacao);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf(" %i", &pontosTuristicos);

    printf("Digite a area (em km²): \n");
    scanf(" %f", &area);

    printf("Digite o PIB (em R$): \n");
    scanf(" %f", &pib);

    printf("Preencha os dados da segunda carta \n"); // Aqui o programa lê os dados que serão enseridos da segunda carta e armazena nas variáveis correspondentes.

    printf("Digite o estado (uma letra): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf(" %3s", codigo2);

    printf("Digite a cidade (ate 14 caracteres): \n");
    scanf(" %14s", cidade2);

    printf("Digite a populacao: \n");
    scanf(" %i", &populacao2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf(" %i", &pontosTuristicos2);

    printf("Digite a area (em km²): \n");
    scanf(" %f", &area2);

    printf("Digite o PIB (em R$): \n");
    scanf(" %f", &pib2);

    // Abaixo o programa imprime os dados para o usuário das duas cartas que foram armazenados nas variáveis correspondentes.

    printf("Carta 1 \n"); // Dados da carta 1
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos);

    printf("Carta 2 \n"); //Dados da carta 2
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos2);

    return 0; // Finaliza o programa
}
