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

int CalculaVariacoes(string s)
{
    int retorno = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 's')
        {
            retorno *= 3;
        }
        else
        {
            retorno *= 2;
        }
    }
    return retorno;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        cout << CalculaVariacoes(s) << endl;
    }
}