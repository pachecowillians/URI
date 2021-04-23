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

int CalculaNumero(string s)
{
    int soma = 0;
    for (int i = 0; i < s.length(); i++)
    {
        soma += s[i];
    }
    return soma;
}

long long int SomaDireita(vector<int> v, int pos)
{
    long long int soma = 0;
    for (int i = v.size() - 1; i >= pos; i--)
    {
        soma += v[i] * (i - pos + 1);
    }
    return soma;
}

long long int SomaEsquerda(vector<int> v, int pos)
{
    long long int soma = 0;
    for (int i = 0; i < pos; i++)
    {
        soma += v[i] * (pos - i);
    }
    return soma;
}

int BuscaBinaria(vector<int> v)
{
    // Na busca binária, espera-se que o vetor esteja ordenado

    int i = 0;
    int f = v.size() - 1;
    int meio;
    while (i <= f)
    {
        meio = (i + f) / 2;
        if (SomaEsquerda(v, meio + 1) == SomaDireita(v, meio + 1))
            return meio;
        else
        {
            if (SomaEsquerda(v, meio + 1) < SomaDireita(v, meio + 1))
                i = meio + 1;
            else
                f = meio - 1;
        }
    }
    return -1;
}

int main()
{
    int ct = 1;
    while (ct != 0)
    {
        cin >> ct;
        if (ct != 0)
        {
            vector<int> vet;
            unordered_map<int, string> m;
            for (int i = 0; i < ct; i++)
            {
                string s;
                cin >> s;
                vet.push_back(CalculaNumero(s));
                m[i] = s;
            }
            int pos = BuscaBinaria(vet);
            if (pos == -1)
            {
                cout << "Impossibilidade de empate." << endl;
            }
            else
            {
                cout << m[pos] << endl;
            }
        }
    }
}