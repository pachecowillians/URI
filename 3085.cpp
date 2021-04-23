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

long double CalculaDistancia(pair<int, int> p0, pair<int, int> pf)
{
    return sqrt(pow(pf.first - p0.first, 2) + pow(pf.second - p0.second, 2));
}

int main()
{
    int numInstrucoes, distanciaLimite, passoErroLimite = -1;
    pair<int, int> p0, pf;
    p0 = make_pair(0, 0);
    cin >> numInstrucoes >> distanciaLimite >> pf.first >> pf.second;
    bool comecouErrado = false;
    if (CalculaDistancia(p0, pf) > distanciaLimite)
    {
        comecouErrado = true;
        passoErroLimite = 1;
    }

    for (int i = 0; i < numInstrucoes; i++)
    {
        char c;
        cin >> c;
        if (!comecouErrado)
        {
            if (c == 'D')
            {
                p0.first++;
            }
            else if (c == 'E')
            {
                p0.first--;
            }
            else if (c == 'C')
            {
                p0.second++;
            }
            else if (c == 'B')
            {
                p0.second--;
            }
            if (CalculaDistancia(p0, pf) > distanciaLimite && passoErroLimite == -1)
            {
                passoErroLimite = i + 1;
            }
        }
    }
    if (passoErroLimite == -1)
    {
        passoErroLimite = numInstrucoes;
    }

    if (p0 == pf)
    {
        cout << "Sucesso" << endl;
    }
    else
    {
        cout << "Trap " << passoErroLimite << endl;
    }
}