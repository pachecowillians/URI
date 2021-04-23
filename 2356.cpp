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
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void VerificaResistencia(string d, string s)
{
    char p = s[0];
    bool resistente = false;
    for (int i = 0; i < d.length() && !resistente; i++)
    {
        if (d[i] == p && (i - d.length() - 1) > s.length())
        {
            string c = d.substr(i, s.length());
            if (c == s)
            {
                resistente = true;
            }
        }
    }
    if (resistente)
    {
        cout << "Resistente" << endl;
    }
    else
    {
        cout << "Nao resistente" << endl;
    }
}

int main()
{
    string d;
    while (cin >> d)
    {
        string s;
        cin >> s;
        VerificaResistencia(d, s);
    }
}