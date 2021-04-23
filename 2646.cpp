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

int relacaoLetras[30][30];

bool VerificaPalavra(string s1, string s2)
{
    if (s1 == s2)
    {
        return true;
    }
    else if (s1.length() != s2.length())
    {
        return false;
    }
    else
    {
        bool pode = true;
        for (int i = 0; i < s1.length() && pode; i++)
        {
            if (relacaoLetras[s1[i] - 'a'][s2[i] - 'a'] == -1)
            {
                pode = false;
            }
        }
        return pode;
    }
}

int main()
{
    int p, f;
    cin >> p >> f;
    memset(relacaoLetras, -1, sizeof(relacaoLetras));
    for (int i = 0; i < 26; i++)
    {
        relacaoLetras[i][i] = true;
    }
    for (int i = 0; i < p; i++)
    {
        char c1, c2;
        cin >> c1 >> c2;
        for (int j = 0; j < 26; j++) //Todos que o segundo se conecta, o primeiro se conecta
        {
            if (relacaoLetras[c2 - 'a'][j] == 1)
            {
                relacaoLetras[c1 - 'a'][j] = 1;
            }
        }
        for (int j = 0; j < 26; j++) //Todos os que se conectam ao primeiro se conectam ao segundo
        {
            if (relacaoLetras[j][c1 - 'a'] == 1)
            {
                relacaoLetras[j][c2 - 'a'] = 1;
                for (int k = 0; k < 26; k++) // E se conectam aos que se conectam ao segundo
                {
                    if (relacaoLetras[c2 - 'a'][k] == 1)
                    {
                        relacaoLetras[j][k] = 1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < f; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (VerificaPalavra(s1, s2))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}