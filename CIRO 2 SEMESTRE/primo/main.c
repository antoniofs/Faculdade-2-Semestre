#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool primo (int);

int main()
{
    int primus;

    printf("Digite o valor: ");
    scanf("%i", &primus);
    printf("o numero %i, se for primo volta 1 se não for primo volta 0\nResultado: %i", primus, primo(primus));
    return 0;
}

bool primo(int x)
{
    int i = 2;
    bool teste = true;

    if (x == 2 || x == 3 || x == 5)
    {
        teste = true;
    }

    else if (x % 2 == 0)
    {
       teste = false;
    }

    else
    {
        while (i < x)
        {
            if (x % i == 0)
            {
                teste = false;
            }
            i++;
        }
    }
    return teste;
}
