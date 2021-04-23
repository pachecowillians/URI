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
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        unordered_map<char, bool> m;
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
            {
                if (m[s[i]] == false)
                {
                    m[s[i]] = true;
                }
            }
        }
        char letraInicial = '_';
        char letraFinal;
        bool primeiraSequencia = true;
        for (int i = 0; i <= 26; i++)
        {
            if (m[(char)(i + 'a')] == 1)
            {
                if (letraInicial == '_')
                {
                    letraInicial = (char)(i + 'a');
                    letraFinal = letraInicial;
                }
                else
                {
                    letraFinal = (char)(i + 'a');
                }
            }
            else
            {
                if (letraInicial != '_')
                {
                    if (primeiraSequencia)
                    {
                        cout << letraInicial << ":" << letraFinal;
                        primeiraSequencia = false;
                    }
                    else
                    {
                        cout << ", " << letraInicial << ":" << letraFinal;
                    }

                    letraInicial = '_';
                    letraFinal = letraInicial;
                }
            }
        }
        cout << endl;
    }
}