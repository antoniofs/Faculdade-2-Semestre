#include <stdio.h>

int main ()
{
    char name [1000];

    int i, RAND_MAX;
    printf("intervalo da rand: [0,%d]\n", RAND_MAX);
    srand( (unsigned)time(NULL) );

    for(i=1 ; i <= 10 ; i++)
        printf("Numero %d: %d\n",i, rand());


    return 0;
}
