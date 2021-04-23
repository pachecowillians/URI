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

string TrataPalavra(string s)
{
    if (s.length() < 4)
    {
        return s;
    }
    else
    {
        if (s.substr(0, 2) == s.substr(2, 2))
        {
            s.erase(0, 2);
        }
        return s;
    }
}

int main()
{
    string s;
    int primeiraLeitura = 1;
    while (cin >> s)
    {
        if (primeiraLeitura == 1)
        {
            primeiraLeitura = 0;
        }
        else
        {
            cout << " ";
        }

        cout << TrataPalavra(s);
    }
    cout << endl;
}