#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int vetorDePrimos (int);

int main()
{
    int numeros;

    printf("digite um numero que não seja negativo: ");
    scanf("%i", &numeros);
    printf("o %i numeros primos são: %d ", numeros, vetorDePrimos(numeros));

    return 0;
}

int vetorDePrimos(int x)
{
    int primos[x], i = 3;

    primos[1] = 2;
    primos[2] = 3;

    while(i <= x)
    {
        if (i % 2 == 0)
        {
        }
        else
        {
            while (i != 2)
            {
                if (x % i == 0)
                {
                    break;
                }
                i--;
            }
        }
        i++;
    }


}
