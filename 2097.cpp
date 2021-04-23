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

long long int RetornaNumero(string s)
{
    if (s == "zero")
    {
        return 0;
    }
    else if (s == "um")
    {
        return 1;
    }
    else if (s == "dois")
    {
        return 2;
    }
    else if (s == "tres")
    {
        return 3;
    }
    else if (s == "quatro")
    {
        return 4;
    }
    else if (s == "cinco")
    {
        return 5;
    }
    else if (s == "seis")
    {
        return 6;
    }
    else if (s == "sete")
    {
        return 7;
    }
    else if (s == "oito")
    {
        return 8;
    }
    else if (s == "nove")
    {
        return 9;
    }
    else if (s == "dez")
    {
        return 10;
    }
    else if (s == "onze")
    {
        return 11;
    }
    else if (s == "doze")
    {
        return 12;
    }
    else if (s == "treze")
    {
        return 13;
    }
    else if (s == "quatorze")
    {
        return 14;
    }
    else if (s == "quinze")
    {
        return 15;
    }
    else if (s == "dezesseis")
    {
        return 16;
    }
    else if (s == "dezessete")
    {
        return 17;
    }
    else if (s == "dezoito")
    {
        return 18;
    }
    else if (s == "dezenove")
    {
        return 19;
    }
    else if (s == "vinte")
    {
        return 20;
    }
    else if (s == "trinta")
    {
        return 30;
    }
    else if (s == "quarenta")
    {
        return 40;
    }
    else if (s == "cinquenta")
    {
        return 50;
    }
    else if (s == "sessenta")
    {
        return 60;
    }
    else if (s == "setenta")
    {
        return 70;
    }
    else if (s == "oitenta")
    {
        return 80;
    }
    else if (s == "noventa")
    {
        return 90;
    }
    else if (s == "cem")
    {
        return 100;
    }
    else if (s == "duzentos")
    {
        return 200;
    }
    else if (s == "trezentos")
    {
        return 300;
    }
    else if (s == "quatrocentos")
    {
        return 400;
    }
    else if (s == "quinhentos")
    {
        return 500;
    }
    else if (s == "seiscentos")
    {
        return 600;
    }
    else if (s == "setecentos")
    {
        return 700;
    }
    else if (s == "oitocentos")
    {
        return 800;
    }
    else if (s == "novecentos")
    {
        return 900;
    }
    else if (s == "mil")
    {
        return 1000;
    }
    else if (s == "milhoes" || s == "milhao")
    {
        return 1000000;
    }
    else if (s == "bilhoes" || s == "bilhao")
    {
        return 1000000000;
    }
    else if (s == "trilhoes" || s == "trilhao")
    {
        return 1000000000000;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    long long int soma;
    while (ss >> s)
    {
        long long int v = RetornaNumero(s);
        if (v >= 1000)
        {
            soma *= v;
        }
        else
        {
            soma += v;
        }
    }
    cout << soma << endl;
}