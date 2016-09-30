/** @uthor: Antonio Flávio, N° 201626192 - Igor Sousa, N
 ** @Faculdade: Universidade Catolica de Santos
 **/

#include <stdio.h>
#include <stdlib.h>
#include <bool.h>
//-------------------------------------------------------------------------------------------------------------------------------
#define COL 9
#define LIN 9
#define ValorTotal 45



bool VerificarLinha(int, int[*][*]); //Prototipo para Verificar linha;
bool VerificarColuna(int ,int [*][*]); //Prototipo para Verificar Coluna;
bool VerificaMatriz3x3(int, int [*][*]); //Prototipo para Verificar Matriz 3x3

int main()
{
    int loop = 0, QtdLoop = 0, sudoku[COL][LIN];
    register int short i = 0, j = 0;


    scanf("%d", &loop);
    do
    {

      for (i = 0; i < COL; i++)
      {
            for (j = 0; j < LIN; j++)
            {
                scanf("%d", &sudoku[i][j]);
            }
       }

     QtdLoop++;
    }while(QtdLoop < loop);

    return 0;
}

bool VerificarLinha(int lin, int VetorLinha[][COL])
{
    int ValorFinal;
    int i = 0, somaTotal = 0, cO = 0;

    for (i = 0; i < LIN; i++)
    {
        somaTotal = VetorLinha[i][cO]

    }


    return true;
}
