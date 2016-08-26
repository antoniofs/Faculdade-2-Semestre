#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void transforma(char [], int qtde_sorteios); //Prototipo

int main ()
{
    int tamanho = 0, x = 0, i, j = 0;
    char std[100];

    printf("\nDigite uma String: ");
    scanf("%[^\n]s", std);
    tamanho = strlen(std);


    srand( (unsigned)time(NULL) );
    x =  1 + (rand()  %(tamanho - 1));
    transforma(std, x);



    return 0;
}

void transforma(char name[100], int qtde_sorteios)
{
     int i, r;
     for(i = 0; i < qtde_sorteios; i++)
     {
        r = 1 + (rand() % (strlen(name) - 1));

        if(name[r] >= 97 && name[r] <= 122)
        {
            name[r] -= 32;
        }

     }
     printf("\nA string nova: %s\n", name);

}
