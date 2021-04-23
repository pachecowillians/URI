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
#include <locale> // std::locale, std::tolower
using namespace std;

int main()
{
    int l, c;
    while (cin >> l >> c)
    {
        pair<int, int> destino, origem;
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int n;
                cin >> n;
                if (n == 1)
                {
                    origem = make_pair(i, j);
                }
                else if (n == 2)
                {
                    destino = make_pair(i, j);
                }
            }
        }
        cout << abs(origem.first - destino.first) + abs(origem.second - destino.second) << endl;
    }
}