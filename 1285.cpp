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

bool VerificaRepetido(string s)
{
    unordered_map<int, bool> m;
    bool pode = true;
    for (int i = 0; i < s.length() && pode; i++)
    {
        if (m.count(s[i] - '0') == 0)
        {
            m[s[i] - '0'] = true;
        }
        else
        {
            pode = false;
        }
    }
    return !pode;
}

int main()
{
    int o, d;
    int v[5010];
    int nRep = 0;
    for (int i = 0; i <= 5000; i++)
    {
        if (!VerificaRepetido(to_string(i)))
        {
            nRep++;
        }
        v[i] = nRep;
    }

    while (cin >> o >> d)
    {
        int n = v[d] - v[o];
        if (!VerificaRepetido(to_string(o)))
        {
            n++;
        }

        cout << n << endl;
    }
}