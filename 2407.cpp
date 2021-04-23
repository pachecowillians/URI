#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

typedef struct ponto
{
    int l, c;
} Ponto;

int Max(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int main()
{
    int mat[3][3];
    Ponto p[3];
    int contPonto = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 0)
            {
                p[contPonto].l = i;
                p[contPonto].c = j;
                contPonto++;
            }
        }
    }

    int l1 = mat[0][0] + mat[0][1] + mat[0][2];
    int l2 = mat[1][0] + mat[1][1] + mat[1][2];
    int l3 = mat[2][0] + mat[2][1] + mat[2][2];
    int c1 = mat[0][0] + mat[1][0] + mat[2][0];
    int c2 = mat[0][1] + mat[1][1] + mat[2][1];
    int c3 = mat[0][2] + mat[1][2] + mat[2][2];
    int d1 = mat[0][0] + mat[1][1] + mat[2][2];
    int d2 = mat[0][2] + mat[1][1] + mat[2][0];

    int ML = Max(l1, Max(l2, l3));
    int MC = Max(c1, Max(c2, c3));
    int MD = Max(d1, d2);
    int NumeroMagico = Max(ML, Max(MD, MC));

    if (d1 == 0 || d2 == 0)
    {
        NumeroMagico = (l1 + l2 + l3) / 2;
    }

    for (int i = 0; i < contPonto; i++)
    {
        if (p[i].l == 0 && p[i].c == 0) //superior esquerdo
        {
            if (mat[0][1] != 0 && mat[0][2] != 0)
            {
                mat[0][0] = NumeroMagico - mat[0][1] - mat[0][2];
            }
            else if (mat[1][1] != 0 && mat[2][2] != 0)
            {
                mat[0][0] = NumeroMagico - mat[1][1] - mat[2][2];
            }
            else
            {
                mat[0][0] = NumeroMagico - mat[1][0] - mat[2][0];
            }
        }
        else if (p[i].l == 0 && p[i].c == 1) //Superior meio
        {
            if (mat[0][0] != 0 && mat[0][2] != 0)
            {
                mat[0][1] = NumeroMagico - mat[0][0] - mat[0][2];
            }
            else
            {
                mat[0][1] = NumeroMagico - mat[1][1] - mat[2][1];
            }
        }
        else if (p[i].l == 0 && p[i].c == 2) //Superior Direito
        {
            if (mat[0][0] != 0 && mat[0][1] != 0)
            {
                mat[0][2] = NumeroMagico - mat[0][0] - mat[0][1];
            }
            else if (mat[1][1] != 0 && mat[2][0] != 0)
            {
                mat[0][2] = NumeroMagico - mat[1][1] - mat[2][0];
            }
            else
            {
                mat[0][2] = NumeroMagico - mat[1][2] - mat[2][2];
            }
        }
        else if (p[i].l == 1 && p[i].c == 0) //Meio Comeco
        {
            if (mat[0][0] != 0 && mat[2][0] != 0)
            {
                mat[1][0] = NumeroMagico - mat[0][0] - mat[2][0];
            }
            else
            {
                mat[1][0] = NumeroMagico - mat[1][1] - mat[1][2];
            }
        }
        else if (p[i].l == 1 && p[i].c == 1) //meio
        {
            if (mat[0][0] != 0 && mat[2][2] != 0)
            {
                mat[1][1] = NumeroMagico - mat[0][0] - mat[2][2];
            }
            else if (mat[0][2] != 0 && mat[2][0] != 0)
            {
                mat[1][1] = NumeroMagico - mat[0][2] - mat[2][0];
            }
            else if (mat[0][1] != 0 && mat[2][1] != 0)
            {
                mat[1][1] = NumeroMagico - mat[0][1] - mat[2][1];
            }
            else
            {
                mat[1][1] = NumeroMagico - mat[1][0] - mat[1][2];
            }
        }
        else if (p[i].l == 1 && p[i].c == 2) //meio fim
        {
            if (mat[1][0] != 0 && mat[1][1] != 0)
            {
                mat[1][2] = NumeroMagico - mat[1][0] - mat[1][1];
            }
            else
            {
                mat[1][2] = NumeroMagico - mat[0][2] - mat[2][2];
            }
        }
        else if (p[i].l == 2 && p[i].c == 0) //inferior esquerdo
        {
            if (mat[0][0] != 0 && mat[1][0] != 0)
            {
                mat[2][0] = NumeroMagico - mat[0][0] - mat[1][0];
            }
            else if (mat[1][1] != 0 && mat[0][2] != 0)
            {
                mat[2][0] = NumeroMagico - mat[1][1] - mat[0][2];
            }
            else
            {
                mat[2][0] = NumeroMagico - mat[2][1] - mat[2][2];
            }
        }
        else if (p[i].l == 2 && p[i].c == 1) //meio inferior
        {
            if (mat[1][1] != 0 && mat[0][1] != 0)
            {
                mat[2][1] = NumeroMagico - mat[0][1] - mat[1][1];
            }
            else
            {
                mat[2][1] = NumeroMagico - mat[2][0] - mat[2][2];
            }
        }
        else if (p[i].l == 2 && p[i].c == 2) //inferior direito
        {
            if (mat[0][0] != 0 && mat[1][1] != 0)
            {
                mat[2][2] = NumeroMagico - mat[0][0] - mat[1][1];
            }
            else if (mat[2][0] != 0 && mat[2][1] != 0)
            {
                mat[2][2] = NumeroMagico - mat[2][0] - mat[2][1];
            }
            else
            {
                mat[2][2] = NumeroMagico - mat[0][2] - mat[1][2];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j];
            if (j < 2)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}