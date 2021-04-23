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

int CalculaComprimentoPalavra(string s)
{
    int contLetras = 0;
    while (s.length() > 0)
    {
        if (s[0] == '.')
        {
            if (s.length() == 1)
            {
                s.erase(0, 1);
            }
            else
            {
                return 0;
            }
        }
        else if (isalpha(s[0]))
        {
            contLetras++;
            s.erase(0, 1);
        }
        else
        {
            return 0;
        }
    }
    return contLetras;
}

int CalculaTamanhoMedioPalavras(string frase)
{
    if (frase[0] == ' ')
    {
        frase.erase(0, 1);
    }
    int somaComprimentos = 0;
    int contPalavras = 0;
    while (frase.length() > 0)
    {
        int espaco = frase.find(" ");
        if (espaco != -1)
        {
            int comp = CalculaComprimentoPalavra(frase.substr(0, espaco));
            if (comp != 0)
            {
                somaComprimentos += comp;
                contPalavras++;
            }

            frase.erase(0, espaco + 1);
        }
        else
        {
            int comp = CalculaComprimentoPalavra(frase);
            if (comp != 0)
            {
                somaComprimentos += comp;
                contPalavras++;
            }
            frase.erase();
        }
    }
    if (contPalavras == 0)
    {
        return 0;
    }
    else
    {
        return somaComprimentos / contPalavras;
    }
}

int CalculaDificuldade(int comprimentoMedioPalavras)
{
    if (comprimentoMedioPalavras <= 3)
    {
        return 250;
    }
    else if (comprimentoMedioPalavras == 4 || comprimentoMedioPalavras == 5)
    {
        return 500;
    }
    else if (comprimentoMedioPalavras >= 6)
    {
        return 1000;
    }
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        cout << CalculaDificuldade(CalculaTamanhoMedioPalavras(s)) << endl;
    }
}