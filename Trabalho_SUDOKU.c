/** @uthor: Antonio Flávio, N° 201626192 - Igor Souza, N°.... - Wanderley, N°....
 ** @Professor: Ciro Trindade
 ** @Materia: Introdução a Computação II
 **/


//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//-------------------------------------------------------------------------------------------------------------------------------//
//DEFINE'S
#define COL 9
#define LIN 9
#define valorFinal 45

//FUNÇÕES
bool VerificarLinha(int, int, int[*][*]); //Prototipo para Verificar linha;
bool VerificarColuna(int, int, int [*][*]); //Prototipo para Verificar Coluna;
bool VerificaMatriz3x3(int, int, int [*][*]); //Prototipo para Verificar Matriz 3x3

//METODO PRINCIPAL
int main ()
{
   register int i, j;
   short unsigned int loop = 0, qtdLoop = 0;
   int matriz[LIN][COL];
   static bool teste = true, teste2 = true, teste3 = true;

   scanf("%d", &loop);

   while(loop > qtdLoop)
    {
     for(i = 0; i < LIN; i++)
     {
         for(j = 0; j < COL; j++)
         {
            scanf("%d", &matriz[i][j]);
         }

     }
    for (i = 0; i < LIN; i++)
    {
       for (j = 0; j < COL; j++)
        {

            teste = VerificarLinha(j, i, matriz);
            teste2 = VerificarColuna(j, i, matriz);
            teste3 = VerificaMatriz3x3(j, i, matriz);

        }

    }

    qtdLoop++;

    if ( teste == true && teste2 == true && teste3 == true )
    {
        printf("Instancia %d\nSIM\n\n", qtdLoop);

    }
    else
        printf("Instancia %d\nNAO\n\n", qtdLoop);

    }

     return 0;

}

bool VerificarLinha(int linha, int coluna, int tabuleiro[][COL])
{
    static int somaLinha[9] = { 0 };
    int i;
    somaLinha[linha] += tabuleiro[linha][coluna];
    if (linha == 8 && coluna == 8)
    {
        for (i = 0; i < LIN; i++)
        {
            if (somaLinha[i] != valorFinal)
            {
                return false;
                break;
            }
        }
        for (i = 0; i < COL; i++)
        {
            somaLinha[i] = 0;
        }
    }
   return true;
}

bool VerificarColuna(int coluna, int linha ,int tabuleiro[][COL])
{
    static int somaColuna[9] = { 0 };
    int i;
    somaColuna[coluna] += tabuleiro[linha][coluna];
    if (linha == 8 && coluna == 8)
    {
        for (i = 0; i < COL; i++)
        {
            if (somaColuna[i] != valorFinal)
            {
                return false;
                break;
            }
        }
        for (i = 0; i < COL; i++)
        {
            somaColuna[i] = 0;
        }
    }
   return true;
}
bool VerificaMatriz3x3(int coluna, int linha, int tabuleiro[][COL])
{
    static int somaTabuleiro[3][3];
    int i, j;

   somaTabuleiro[coluna/3][linha/3] += tabuleiro[linha][coluna];
   if (linha == 8 && coluna == 8)
   {
       for (i = 0; i < 3; i++)
       {
           for (j = 0; j < 3; j++)
           {
               if (somaTabuleiro[i][j] != valorFinal)
               {
                   return false;
                   break;
               }
           }
       }
       for (i = 0; i < 3; i++)
       {
           for (j = 0; j < 3; j++)
           {
               somaTabuleiro[i][j] = 0;
           }
       }
   }
   return true;
}
