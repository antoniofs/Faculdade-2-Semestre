#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct nasc
{
    int mes;
    int ano;
}nasc;


typedef struct gado
{
    int codigo;
    int leite;
    int alim;
    struct nasc;
    char abate;
}cabecas;


void carregarBase(struct);
void incluirRegistro(struct);
//char campoAbate()


int main ()
{
    gado v[MAX];
    int i;

    for (i = 0; i < MAX i++)
    {
        printf("c�digo da cabe�a de gado: ");
        scanf("%d", &v[i].codigo);
        printf("n�mero de litros de leite produzido por semana; ");
        scanf("%d", &v[i].leite);
        printf("quantidade de alimento ingerida por semana - em quilos");
        scanf("%d", &v[i].alim);
        printf("Informe o mes: ");
        scanf("%d", &v[i].nasc.mes)




    }



    return 0;
}
