#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stack> //pilha
#include <queue> //fila
#include <functional>
#include <tr1/functional> //hash
#include <bits/stdc++.h>
#include <stdbool.h>
#include <vector>
using namespace std;

int NumeroDivisores(int n)
{
    int c = 2;
    for (int i = 2; i < ((int)floor(sqrt(n))) + 1; i++)
    {
        if (n % i == 0)
        {
            c += (n / i == i) ? 1 : 2;
        }
    }
    return c;
}

void RemoveMultiplosPrimo(bool vetPrimos[], int primo)
{
    for (int i = primo + 1; i < 2000001; i++)
    {
        if (i % primo == 0)
        {
            vetPrimos[i] = false;
            i += primo - 1;
        }
    }
}

void CrivoDeErastotenes(bool vetPrimos[], int vetNumDivisores[])
{
    int raizQuadrada = 1414;
    for (int i = 2; i < raizQuadrada; i++)
    {
        vetNumDivisores[i] = NumeroDivisores(i);
        if (vetNumDivisores[i] == 2)
        {
            RemoveMultiplosPrimo(vetPrimos, i);
        }
    }
}

void CriaVetHiperprimos(bool vetPrimos[], int vetNumDivisores[], int vetHiperprimos[])
{
    unsigned int contHiperPrimos = 0;
    for (int i = 2; i < 2000001; i++)
    {
        if (vetPrimos[i])
        {
            contHiperPrimos++;
        }
        else if (sqrt(i) == (int)sqrt(i) && vetPrimos[NumeroDivisores(i)])
        {
            contHiperPrimos++;
        }
        vetHiperprimos[i] = contHiperPrimos;
    }
}

bool vetPrimos[2000001];
int vetHiperprimos[2000001];
int vetNumDivisores[2000001];

int main()
{

    memset(vetPrimos, true, sizeof(vetPrimos));
    memset(vetHiperprimos, 0, sizeof(vetHiperprimos));
    memset(vetNumDivisores, 0, sizeof(vetNumDivisores));

    CrivoDeErastotenes(vetPrimos, vetNumDivisores);
    CriaVetHiperprimos(vetPrimos, vetNumDivisores, vetHiperprimos);

    int n;

    while (cin >> n)
    {
        cout << vetHiperprimos[n] << endl;
    }
}
