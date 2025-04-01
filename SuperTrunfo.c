#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //setlocale(0, "Portuguese");
    setlocale(LC_ALL, "Portuguese");
    // Carta 1
    printf("------------- Carta 1 -------------\n");
    // Definindo variáveis
    char estadoUm;
    char codeCartaUm[3];
    char nomeCidadeUm[30];
    int populacaoUm;
    double areaUm;
    double pibUm;
    int pontosTuristicosUm;

    // Pegando o estado
    printf("Informe o estado: ");
    fflush(stdin);
    estadoUm = getchar();

    //Pegando o código da carta
    printf("Código da Carta: ");
    fflush(stdin);
    scanf("%s", &codeCartaUm);

    // Pegando o nome da cidade
    printf("Nome da cidade: ");
    fflush(stdin);
    gets(nomeCidadeUm);

    // Pegando a população
    printf("População: ");
    scanf("%d", &populacaoUm);

    // Pegando a área
    printf("Área: ");
    fflush(stdin);
    scanf("%lf", &areaUm);

    // Pegando o PIB
    printf("PIB: ");
    fflush(stdin);
    scanf("%lf", &pibUm);

    // Pegando os pontos turísticos
    printf("Números de Pontos Turísticos: ");
    fflush(stdin);
    scanf("%d", &pontosTuristicosUm);

    // ============================================

    // Carta 2
    printf("\n------------- Carta 2 -------------\n");
    /* Definindo variáveis
    char estadoDois;
    char codeCartaDois[3];
    char nomeCidadeDois[30];
    int populacaoDois;
    double areaDois;
    double pibDois;
    int pontosTuristicosDois;

    // Pegando o estado
    printf("Informe o estado: ");
    fflush(stdin);
    estadoDois = getchar();

    // Pegando o código da carta
    printf("Código da Carta: ");
    scanf("%s", codeCartaDois);

    // Pegando o nome da cidade
    printf("Nome da cidade: ");
    fflush(stdin);
    gets(nomeCidadeDois);

    // Pegando a população
    printf("População: ");
    scanf("%d", &populacaoDois);

    // Pegando a área
    printf("Área: ");
    fflush(stdin);
    scanf("%lf", &areaDois);

    // Pegando o PIB
    printf("PIB: ");
    fflush(stdin);
    scanf("%lf", &pibDois);

    // Pegando os pontos turísticos
    printf("Números de Pontos Turísticos: ");
    fflush(stdin);
    scanf("%d", &pontosTuristicosDois);*/

    // ==============================================
    // RESULTADO

    // Carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estadoUm);
    printf("Código: %s\n", codeCartaUm);
    printf("Nome da cidade: %s\n", nomeCidadeUm);
    printf("População: %d\n", populacaoUm);
    printf("Área: %.2lf km²\n", areaUm);
    printf("PIB: %.2lf bilhões de reais\n", pibUm);
    printf("Número de Pontos Turísticos: %d\n",pontosTuristicosUm);

    /* Carta 2
    printf("Carta 2\n");
    printf("Estado: %s\n", estadoDois);
    printf("Código: %s\n", codeCartaDois);
    printf("Nome da cidade: %s\n", nomeCidadeDois);
    printf("População: %d\n", populacaoDois);
    printf("Área: %.2lf km²\n", areaDois);
    printf("PIB: %.2lf bilhões de reais\n", pibDois);
    printf("Número de Pontos Turísticos: %d\n",pontosTuristicosDois);*/

    system("pause");
}
