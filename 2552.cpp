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
#include <stdlib.h>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <set>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int l, c;
    while (cin >> l >> c)
    {
        int mat[l][c];
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> mat[i][j];
            }
        }
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (mat[i][j] == 1)
                {
                    cout << 9;
                }
                else
                {
                    int soma = 0;
                    if (i - 1 >= 0)
                    {
                        soma += mat[i - 1][j];
                    }
                    if (j - 1 >= 0)
                    {
                        soma += mat[i][j - 1];
                    }
                    if (j + 1 < c)
                    {
                        soma += mat[i][j + 1];
                    }
                    if (i + 1 < l)
                    {
                        soma += mat[i + 1][j];
                    }
                    cout << soma;
                }
            }
            cout << endl;
        }
    }
}