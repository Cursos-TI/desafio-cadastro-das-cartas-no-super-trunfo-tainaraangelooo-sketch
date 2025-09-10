#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[0];
    char nomeCidade1[0];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Carta 2
    char estado2;
    char codigo2[0];
    char nomeCidade2[0];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

   
    // Leitura - Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura - Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição - Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: A%c\n", estado1);
    printf("Código: A01%s\n", codigo1);
    printf("Nome da Cidade: Beberibe%s\n", nomeCidade1);
    printf("População: 53114%d\n", populacao1);
    printf("Área: 1.596.750%.f km²\n", area1);
    printf("PIB: 19.497,48%.f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: 15%d\n", pontosTuristicos1);

    // Exibição - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: B%c\n", estado2);
    printf("Código: B02%s\n", codigo2);
    printf("Nome da Cidade: Cascavel%s\n", nomeCidade2);
    printf("População: 71.720%d\n", populacao2);
    printf("Área: 838.115,00%.2f km²\n", area2);
    printf("PIB: 14.777,00%.f bilhões de reais\n",pib2);
    printf("Número de Pontos Turísticos: 12%d\n", pontosTuristicos2);

    return 0;
}