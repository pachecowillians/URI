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

int CalculaCiclos(string s, int n)
{
    int contadorIgual = 0;
    int contRetornar = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W')
        {
            contRetornar++;
            if (contadorIgual != 0)
            {
                contRetornar++;
            }

            contadorIgual = 0;
        }
        else
        {
            contadorIgual++;
            if (contadorIgual == n)
            {
                contRetornar++;
                contadorIgual = 0;
            }
        }
    }
    if (contadorIgual > 0)
    {
        contRetornar++;
    }

    return contRetornar;
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        int n;
        cin >> n;
        cin.ignore();
        cout << CalculaCiclos(s, n) << endl;
    }
}