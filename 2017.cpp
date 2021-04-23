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

int CalculaDistancia(string base, string s)
{
    int contDiferente = 0;
    for (int i = 0; i < base.length(); i++)
    {
        if (base[i] != s[i])
        {
            contDiferente++;
        }
    }
    return contDiferente;
}

int main()
{
    string base;
    cin >> base;
    int k;
    cin >> k;
    vector<pair<string, int>> v;
    int menDist = INT_MAX;
    int posMenor = -1;
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        int dif = CalculaDistancia(base, s);
        if (dif < menDist)
        {
            menDist = dif;
            posMenor = i + 1;
        }
    }
    if (menDist > k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << posMenor << endl;
        cout << menDist << endl;
    }
}