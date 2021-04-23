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

int Mdc(int a, int b)
{
    if (b == 0)
        return a;
    if (a > b)
        return Mdc(b, a % b);
    else
        return Mdc(a, b % a);
}

string TrataString(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (!isalpha(s[i]))
        {
            s[i] = ' ';
        }
        else
        {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

int main()
{
    map<string, int> mapaStrings;
    string n;
    int contPalavrasDistintas = 0;
    int contPalavrasDistintasConfirmadas = 0;
    int contJogos = 0;
    while (cin >> n)
    {
        n = TrataString(n);
        stringstream ss; //Muito massa!
        ss << n;
        while (ss >> n)
        {
            if (n == "bullshit")
            {
                mapaStrings.clear();
                contJogos++;
                contPalavrasDistintasConfirmadas = contPalavrasDistintas;
            }
            else
            {
                if (!mapaStrings[n])
                {
                    mapaStrings[n] = 1;
                    contPalavrasDistintas++;
                }
            }
        }
    }
    int m = Mdc(contPalavrasDistintasConfirmadas, contJogos);
    cout << contPalavrasDistintasConfirmadas / m << " / " << contJogos / m << endl;
}