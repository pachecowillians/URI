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
using namespace std;

void ImprimeMatriz(vector<vector<char>> m)
{
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[i].size(); j++)
        {
            cout << m[i][j];
        }
        cout << endl;
    }
    cout << "@" << endl;
}

int main()
{
    int n = 1;
    while (n != 0)
    {
        cin >> n;
        if (n != 0)
        {
            vector<vector<char>> m(n, vector<char>(n, 'O'));
            int pos = (n - 1) / 2;
            pair<int, int> p = make_pair(pos, pos);
            m[p.first][p.second] = 'X';
            int i = 0;
            ImprimeMatriz(m);
            char direcao = 'd';
            while (i < n)
            {
                m[p.first][p.second] = 'O';
                i++;
                if (p.first != n - 1 || p.second != n - 1)
                {
                    if (direcao == 'd')
                    {
                        for (int j = 0; j < i; j++)
                        {
                            if (p.second + 1 < n)
                            {
                                p.second += 1;
                                m[p.first][p.second] = 'X';
                                ImprimeMatriz(m);
                                m[p.first][p.second] = 'O';
                            }
                        }
                        if (p.first != n - 1 || p.second != n - 1)
                        {
                            for (int j = 0; j < i; j++)
                            {

                                p.first--;
                                m[p.first][p.second] = 'X';
                                ImprimeMatriz(m);
                                m[p.first][p.second] = 'O';
                            }

                            direcao = 'e';
                        }
                    }
                    else if (direcao == 'e')
                    {
                        for (int j = 0; j < i; j++)
                        {
                            p.second--;
                            m[p.first][p.second] = 'X';
                            ImprimeMatriz(m);
                            m[p.first][p.second] = 'O';
                        }
                        for (int j = 0; j < i; j++)
                        {
                            if (p.first + 1 < n)
                            {
                                p.first++;
                                m[p.first][p.second] = 'X';
                                ImprimeMatriz(m);
                                m[p.first][p.second] = 'O';
                            }
                        }

                        direcao = 'd';
                    }
                }
            }
        }
    }
}