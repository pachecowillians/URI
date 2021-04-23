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

string GeraBinario(string s, int *contUm, int *contZero)
{
    string ret = "";
    int p = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < (s[i] - '0'); j++)
        {
            ret += to_string(p);
            if (p == 1)
            {
                (*contUm)++;
            }
            else
            {
                (*contZero)++;
            }
        }

        if (p == 0)
        {
            p = 1;
        }
        else
        {
            p = 0;
        }
    }
    return ret;
}

int SomaDigitos(string s)
{
    int soma = 0;
    for (int i = 0; i < s.length(); i++)
    {
        soma += s[i] - '0';
    }
    return soma;
}

int main()
{
    int ct = 1;
    while (ct != 0)
    {
        cin >> ct;
        if (ct != 0)
        {
            for (int i = 0; i < ct; i++)
            {
                string s;
                cin >> s;
                int contUm = 0;
                int contZero = 0;
                string valorOriginal = s;
                s = GeraBinario(s, &contUm, &contZero);
                cout << SomaDigitos(to_string(contUm)) + SomaDigitos(to_string(contZero)) << endl;
            }
        }
    }
}