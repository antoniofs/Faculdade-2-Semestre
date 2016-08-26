#include <stdio.h>

void bin2dec(int *);
void dec2bin(int *);

int main()
{
    int n;

    printf("Informe um numero em binario: ");
    scanf("%d", &n);

    bin2dec(&n);
    printf("Valor em decimal: %d\n", n);
    dec2bin(&n);
    printf("Valor em binario: %d\n", n);
    return 0;
}

void bin2dec(int * pnum)
{
    int bin = *pnum, pot2 = 1;
    *pnum = 0;
    while (bin > 0) {
        *pnum += (bin % 10) * pot2;
        pot2 *= 2;
        bin /= 10;
    }
}

void dec2bin(int * pnum)
{
    int dec = *pnum, pot10 = 1;
    *pnum = 0;
    while (dec > 0) {
        *pnum += (dec % 2) * pot10;
        pot10 *= 10;
        dec /= 2;
    }
}

