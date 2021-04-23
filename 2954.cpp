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

string RemoveSimbolos(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.' || s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (isalpha(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

int main()
{
    int ct;
    cin >> ct;
    cin.ignore();
    for (int i = 0; i < ct; i++)
    {
        string frase;
        getline(cin, frase);
        frase = RemoveSimbolos(frase);
        stringstream ss;
        ss << frase;
        string s;
        int somaSegundos = 0;
        int maxSomaSegundos = 0;
        while (ss >> s)
        {
            if (s != "jogo" && s != "perdi")
            {
                somaSegundos += s.length();
            }
            else
            {
                somaSegundos += s.length();
                if (somaSegundos > maxSomaSegundos)
                {
                    maxSomaSegundos = somaSegundos;
                }
                somaSegundos = 0;
            }
        }
        if (somaSegundos > maxSomaSegundos)
        {
            maxSomaSegundos = somaSegundos + s.length();
        }
        cout << maxSomaSegundos << endl;
    }
}