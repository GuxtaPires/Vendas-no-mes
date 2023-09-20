#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    char mes[20][12];
    int vendas[12][4];
    int somames[12];
    int somasemana[4];
    int somano = 0;
    int i, j;

    for (i = 0; i < 12; i++)
        somames[i] = 0;

    for (j = 0; j < 4; j++)
        somasemana[j] = 0;

    for (i = 0; i < 12; i++)
    {
        printf("Informe o %dº mês: ", i + 1);
        scanf("%s", mes[i]);
        for (j = 0; j < 4; j++)
        {
            printf("Informe as vendas do mês %d na semana %d: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
            somano += vendas[i][j];
            somames[i] += vendas[i][j];
            somasemana[j] += vendas[i][j];
        }
        printf("\n");
    }

    printf("\n");
    printf("=== SOMA DOS MESES === \n");

    for (i = 0; i < 12; i++)
    {
        printf("No %dº mês - %s - total de %d itens vendidos \n", i + 1, mes[i], somames[i]);
    }

    printf("\n");
    printf("=== SOMA DAS SEMANAS === \n");

    for (j = 0; j < 4; j++)
    {
        printf("Semana %d: %d itens vendidos \n", j + 1, somasemana[j]);
    }

    printf("\n");
    printf("=== SOMA DO ANO === \n");

    printf("Ano: %d\n", somano);

    return;
}

