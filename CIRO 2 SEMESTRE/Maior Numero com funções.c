#include <stdio.h>

void maior(int, int, int);

int main()
{
    int a, b, c;

    printf("Informe 3 inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    maior(a, b, c);
    return 0;
}

void maior(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3) {
        printf("Maior: %d\n", n1);
    }
    else {
        if (n2 > n3) {
            printf("Maior: %d\n", n2);
        }
        else {
            printf("Maior: %d\n", n3);
        }
    }
}
