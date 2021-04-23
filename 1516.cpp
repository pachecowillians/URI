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

int main()
{
    int l1, c1;
    while (l1 != 0 || c1 != 0)
    {
        cin >> l1 >> c1;
        if (l1 != 0 && c1 != 0)
        {
            vector<vector<char>> matDesenho(l1, vector<char>(c1));
            for (int i = 0; i < l1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    cin >> matDesenho[i][j];
                }
            }
            int l2, c2;
            cin >> l2 >> c2;
            int escalaLinha = l2 / l1;
            int escalaColuna = c2 / c1;
            for (int i = 0; i < l1; i++)
            {
                string s = "";
                for (int j = 0; j < c1; j++)
                {
                    for (int k = 0; k < escalaColuna; k++)
                    {
                        s += matDesenho[i][j];
                    }
                }
                for (int j = 0; j < escalaLinha; j++)
                {
                    cout << s << endl;
                }
            }
            cout << endl;
        }
    }
}