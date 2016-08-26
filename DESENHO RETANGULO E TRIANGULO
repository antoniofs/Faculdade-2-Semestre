#include <stdio.h>

void retangulo(int, int);
void triangulo(int, char);

int main()
{
    int alt, comp;
    char c;

    printf("Informe a altura e o comprimento do retangulo: ");
    scanf("%d %d", &alt, &comp);
    retangulo(alt, comp);

    printf("Informe o comprimento da base do triangulo e o caractere de preenchimento: ");
    scanf("%d %c", &comp, &c);
    triangulo(comp, c);
    return 0;
}

void retangulo(int a, int c)
{
    int i, j;
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= c; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangulo(int n, char ch)
{
    int i, espacos = 0;

    while (n > 0) {
        for (i = 1; i <= espacos; i++) {
            printf(" ");
        }
        for (i = 1; i <= n; i++) {
            printf("%c", ch);
        }
        printf("\n");
        n -= 2;
        espacos++;
    }
}

