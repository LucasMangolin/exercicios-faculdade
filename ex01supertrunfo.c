#include <stdio.h>

int main(){
    int populacao, pTuristico, populacao2, pTuristico2;
    float pib, area, pib2, area2;
    char nomeCidade[50], codCarta[3], estado, nomeCidade2[50], codCarta2[3], estado2;;

    printf("Carta 1:\n ");


    printf("Digite a letra inicial do estado: ");
    scanf("%c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", &codCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pTuristico);

    printf("Carta 2:\n ");
    printf("Digite a letra inicial do estado: ");
    scanf("%c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", &codCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pTuristico2);

    printf("Carta 1:\nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %f km²\nPIB: %f bilhões de reais\nNumeros de Pontos Tursticos: %d \nCarta 2:\nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %f km²\nPIB: %f bilhões de reais\nNumeros de Pontos Tursticos: %d", estado, estado2, populacao, populacao2, area, area2, codCarta, codCarta2, nomeCidade, nomeCidade2, pTuristico, pTuristico2, codCarta, codCarta2);

}

