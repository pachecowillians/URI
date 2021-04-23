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

int CalculaNumerosImpares(vector<int> v)
{
    int contImpar = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0 && v[i] % 2 != 0)
        {
            contImpar++;
        }
    }
    return contImpar;
}

int main()
{
    string s;
    while (cin >> s)
    {
        vector<int> v(26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            v[s[i] - 'a']++;
        }
        int numImpares = CalculaNumerosImpares(v);
        if (numImpares == 0 || numImpares == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << numImpares - 1 << endl;
        }
    }
}