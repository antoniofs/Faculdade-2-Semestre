#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int arredondarParaInt(double);

int main()
{
    double numero;

    while (1)
    {


    printf("Digite o valor que queira arredondar: ");
    scanf("%lf", &numero);
    printf("o valor inteiro arredondado: %d\n\n", arredondarParaInt(numero));
    }
    return 0;
}

int arredondarParaInt(double x)
{
    int total;

    total = floor(( x + 0.5 ));

    return total;
}
