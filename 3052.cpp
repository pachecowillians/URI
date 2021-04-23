#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stack> //pilha
#include <queue> //fila
#include <functional>
#include <tr1/functional> //hash
#include <vector>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> AguaEscorrendo(vector<vector<char>> mat, int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 && mat[i][j] == 'o')
            {
                int desl = j;
                while (mat[i + 1][desl] == '#')
                {
                    desl--;
                    mat[i][desl] = 'o';
                }
            }

            if (mat[i][j] == '.')
            {
                if (j - 1 >= 0 && i + 1 < l && mat[i][j - 1] == 'o' && mat[i + 1][j - 1] == '#')
                {
                    mat[i][j] = 'o';
                }
                else if (i - 1 >= 0 && mat[i - 1][j] == 'o')
                {
                    mat[i][j] = 'o';
                    if (i + 1 < l)
                    {
                        int desl = j;
                        while (mat[i + 1][desl] == '#')
                        {
                            desl--;
                            mat[i][desl] = 'o';
                        }
                    }
                }
                else if (j + 1 < c && i + 1 < l && mat[i][j + 1] == 'o' && mat[i + 1][j + 1] == '#')
                {
                    mat[i][j] = 'o';
                }
            }
        }
    }
    return mat;
}

int main()
{
    int l, c;
    cin >> l >> c;
    vector<vector<char>> mat(l, vector<char>(c));
    
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
    mat = AguaEscorrendo(mat, l, c);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
}