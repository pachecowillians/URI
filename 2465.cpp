#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <string>
using namespace std;

typedef struct aluno
{
    int numCamisa;
    int bandeiraLevantada;
} Aluno;

int CalculaBandeiras(Aluno **mat, int i, int j, int ordem) //i=linha, j=coluna
{
    mat[i][j].bandeiraLevantada = 1;
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0;

    if (j + 1 < ordem && mat[i][j + 1].bandeiraLevantada == 0 && mat[i][j + 1].numCamisa >= mat[i][j].numCamisa)
    {
        v1 = 1 + CalculaBandeiras(mat, i, j + 1, ordem);
    }
    if (i + 1 < ordem && mat[i + 1][j].bandeiraLevantada == 0 && mat[i + 1][j].numCamisa >= mat[i][j].numCamisa)
    {
        v2 = 1 + CalculaBandeiras(mat, i + 1, j, ordem);
    }
    if (j - 1 >= 0 && mat[i][j - 1].bandeiraLevantada == 0 && mat[i][j - 1].numCamisa >= mat[i][j].numCamisa)
    {
        v3 = 1 + CalculaBandeiras(mat, i, j - 1, ordem);
    }
    if (i - 1 >= 0 && mat[i - 1][j].bandeiraLevantada == 0 && mat[i - 1][j].numCamisa >= mat[i][j].numCamisa)
    {
        v4 = 1 + CalculaBandeiras(mat, i - 1, j, ordem);
    }
    return v1 + v2 + v3 + v4;
}

int main()
{
    int ordem;
    cin >> ordem;
    Aluno **mat = (Aluno **)malloc(ordem * sizeof(Aluno *));
    for (int i = 0; i < ordem; i++)
    {
        mat[i] = (Aluno *)malloc(ordem * sizeof(Aluno));
    }

    int linhaInicial = 0;
    int colunaInicial = 0;
    cin >> linhaInicial >> colunaInicial;
    linhaInicial--;
    colunaInicial--;
    for (int i = 0; i < ordem; i++)
    {
        for (int j = 0; j < ordem; j++)
        {
            cin >> mat[i][j].numCamisa;
            mat[i][j].bandeiraLevantada = 0;
        }
    }
    cout << CalculaBandeiras(mat, linhaInicial, colunaInicial, ordem) + 1 << endl;
}