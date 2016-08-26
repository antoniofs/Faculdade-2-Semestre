#include <stdio.h>

void somabit(int, int, int *, int *);

int main()
{
    int bin1, bin2, resultado = 0, pot10 = 1, vaium = 0, soma;

    printf("Informe 2 numeros binarios: ");
    scanf("%d %d", &bin1, &bin2);
    while (bin1 > 0 || bin2 > 0 || vaium > 0) {
        somabit(bin1 % 10, bin2 % 10, &vaium, &soma);
        resultado += soma * pot10;
        pot10 *= 10;
        bin1 /= 10;
        bin2 /= 10;
    }
    printf("Resultado da soma: %d\n", resultado);
    return 0;
}

void somabit(int b1, int b2, int * vaium, int * soma)
{
    *soma = b1 + b2 + *vaium;  // resultado em decimal
    *vaium = *soma / 2;
    *soma %= 2;
}