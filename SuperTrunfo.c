#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //setlocale(0, "Portuguese");
    setlocale(LC_ALL, "Portuguese");
    // Carta 1
    printf("------------- Carta 1 -------------\n");
    // Definindo vari�veis
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

    //Pegando o c�digo da carta
    printf("C�digo da Carta: ");
    fflush(stdin);
    scanf("%s", &codeCartaUm);

    // Pegando o nome da cidade
    printf("Nome da cidade: ");
    fflush(stdin);
    gets(nomeCidadeUm);

    // Pegando a popula��o
    printf("Popula��o: ");
    scanf("%d", &populacaoUm);

    // Pegando a �rea
    printf("�rea: ");
    fflush(stdin);
    scanf("%lf", &areaUm);

    // Pegando o PIB
    printf("PIB: ");
    fflush(stdin);
    scanf("%lf", &pibUm);

    // Pegando os pontos tur�sticos
    printf("N�meros de Pontos Tur�sticos: ");
    fflush(stdin);
    scanf("%d", &pontosTuristicosUm);

    // ============================================

    // Carta 2
    printf("\n------------- Carta 2 -------------\n");
    /* Definindo vari�veis
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

    // Pegando o c�digo da carta
    printf("C�digo da Carta: ");
    scanf("%s", codeCartaDois);

    // Pegando o nome da cidade
    printf("Nome da cidade: ");
    fflush(stdin);
    gets(nomeCidadeDois);

    // Pegando a popula��o
    printf("Popula��o: ");
    scanf("%d", &populacaoDois);

    // Pegando a �rea
    printf("�rea: ");
    fflush(stdin);
    scanf("%lf", &areaDois);

    // Pegando o PIB
    printf("PIB: ");
    fflush(stdin);
    scanf("%lf", &pibDois);

    // Pegando os pontos tur�sticos
    printf("N�meros de Pontos Tur�sticos: ");
    fflush(stdin);
    scanf("%d", &pontosTuristicosDois);*/

    // ==============================================
    // RESULTADO

    // Carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estadoUm);
    printf("C�digo: %s\n", codeCartaUm);
    printf("Nome da cidade: %s\n", nomeCidadeUm);
    printf("Popula��o: %d\n", populacaoUm);
    printf("�rea: %.2lf km�\n", areaUm);
    printf("PIB: %.2lf bilh�es de reais\n", pibUm);
    printf("N�mero de Pontos Tur�sticos: %d\n",pontosTuristicosUm);

    /* Carta 2
    printf("Carta 2\n");
    printf("Estado: %s\n", estadoDois);
    printf("C�digo: %s\n", codeCartaDois);
    printf("Nome da cidade: %s\n", nomeCidadeDois);
    printf("Popula��o: %d\n", populacaoDois);
    printf("�rea: %.2lf km�\n", areaDois);
    printf("PIB: %.2lf bilh�es de reais\n", pibDois);
    printf("N�mero de Pontos Tur�sticos: %d\n",pontosTuristicosDois);*/

    system("pause");
}
