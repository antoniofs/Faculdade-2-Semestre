#include <stdio.h>
#include <stdlib.h>

int contaNumero (int, int);

int main()
{
    int numero, digito;

    printf("Favor informe um numero qualquer: ");
    scanf("%i", &numero);
    printf("Favor informe o digito para a procura: ");
    scanf("%i", &digito);
    printf ("o total de digitos %i e: %i", digito, contaNumero(numero, digito));
    return 0;
}

int contaNumero (int x, int y)
{
    int total = 0, i, cont = 0;

    while (x != 0)
    {
        total = x % 10;
        if (total == y)
        {
            cont++;
        }
        x /= 10;

    }
    return cont;
}
