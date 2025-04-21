#include <stdio.h>
#include <locale.h>
#include <string.h> // Para usar strcspn

int main() {
    int populacao1, npt1;
    int populacao2, npt2;
    float area2, pib2;
    float area1, pib1;
    char nome1[100]; // Aumentado para suportar mais palavras
    char nome2[100]; // Aumentado para suportar mais palavras
    char estado1[3];
    char estado2[3];
    char cc1[4];
    char cc2[4];

    printf("Carta 1: Informe o Estado: \n");
    scanf("%2s", estado1);

    printf("Carta 1: Informe o nome da cidade: \n");
    getchar(); // Limpa o buffer do '\n' deixado pelo scanf anterior
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Remove o '\n' do final

    printf("Carta 1: Informe o Código da cidade: \n");
    scanf("%3s", cc1);

    printf("Carta 1: Informe a Área Geográfica da cidade: \n");
    scanf("%f", &area1);

    printf("Carta 1: Informe a Quantidade Populacional: \n");
    scanf("%d", &populacao1);

    printf("Carta 1: Informe o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Carta 1: Informe o Número de Pontos Turísticos: \n");
    scanf("%d", &npt1);

    printf("Salvando as informações...\n");
    printf("Aguarde...\n");
    printf("Salvando...\n");
    printf("As informações foram salvas com sucesso!\n");

    printf("Carta 2: Informe o Estado: \n");
    scanf("%2s", estado2);

    printf("Carta 2: Informe o nome da cidade: \n");
    getchar(); // Limpa o buffer do '\n' deixado pelo scanf anterior
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // Remove o '\n' do final

    printf("Carta 2: Informe o Código da cidade: \n");
    scanf("%3s", cc2);

    printf("Carta 2: Informe a Área Geográfica da cidade: \n");
    scanf("%f", &area2);

    printf("Carta 2: Informe a Quantidade Populacional: \n");
    scanf("%d", &populacao2);

    printf("Carta 2: Informe o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Carta 2: Informe o Número de Pontos Turísticos: \n");
    scanf("%d", &npt2);

    printf("     Carta 01:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nome1);
    printf("Código: %s\n", cc1);
    printf("Área: %.2fm²\n", area1);
    printf("População: %d\n", populacao1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", npt1);

    printf("     Carta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome2);
    printf("Código: %s\n", cc2);
    printf("Área: %.2fm²\n", area2);
    printf("População: %d\n", populacao2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);

    return 0;
}
