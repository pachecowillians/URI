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
#include <bits/stdc++.h>
using namespace std;

void Criptografa(string strEntrada)
{
    vector<char> vetPalavra;
    int tamStr = strEntrada.length();
    for (int i = 0; i < tamStr; i++)
    {
        if (isalpha(strEntrada[i]))
        {
            if (isupper(strEntrada[i]) || islower(strEntrada[i]))
            {
                strEntrada[i] += 3;
            }
        }
        int metadeString = 0;
        if (tamStr % 2 == 0)
        {
            metadeString = tamStr / 2;
        }
        else
        {
            metadeString = (tamStr + 1) / 2;
        }

        if (i < metadeString)
        {
            strEntrada[i]--;
        }

        vetPalavra.insert(vetPalavra.begin(), strEntrada[i]);
    }
    for (int i = 0; i < strEntrada.length(); i++)
    {
        cout << (char)vetPalavra[i];
    }
    cout << endl;
}

int main()
{
    int ct;
    cin >> ct;
    cin.ignore();
    for (int i = 0; i < ct; i++)
    {
        string s;
        getline(cin, s);
        Criptografa(s);
    }
}