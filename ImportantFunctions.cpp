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

//Converte numero para string binária;

string ConverteParaBinario(int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {

        s = (char)((n % 2) + '0') + s;
        n = n / 2;
        i++;
    }
    return s;
}

//Converte de binario para decimal

long long int ConverteParaDecimal(string s)
{
    long long int n = 0;
    int p = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        n += (s[i] - '0') * pow(2, p);
        p++;
    }
    return n;
}

//Cálculo de módulo de string gigante

int CalculaModulo(string s, int n)
{
    int valor = 0;
    for (long long int i = 0; i < s.size(); ++i)
    {
        valor = valor * 10 + (s[i] - '0');
        valor %= n;
    }
    return valor;
}

//Soma um na string baseado em um vetor que contém as posições que devem ser alteradas

string SomaUmString(string s, vector<int> v)
{
    int i = v.back();
    int j = 0;

    int posVet = v.size() - 1;

    if (s[i] == '9')
    {
        j = v[posVet];
        while (s[j] == '9' && posVet >= 0)
        {
            s[j] = '0';
            posVet--;
            j = v[posVet];
        }
        if (j == 0)
        {
            return "*";
        }
        s[j]++;
    }
    else
    {
        s[i]++;
    }
    return s;
}

//Imprime uma matriz justificada por um valor

void ImprimeMatrizJustificada()
{
    int m[10][10];
    int n = 10;
    string maxVal = to_string(m[n - 1][n - 1]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
                printf("%*d", (int)maxVal.length(), m[i][j]);
            else
                printf(" %*d", (int)maxVal.length(), m[i][j]);
        }
        cout << endl;
    }
}

void ImprimeDivisores(int n)
{
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
}

void ConverterGrausHoras(int v)
{
    int h = ((int)(v * 240) / 3600) % 60;
    int m = ((int)(v * 240) / 60) % 60;
    int s = (int)(v * 240) % 60;
    cout << setfill('0') << setw(2) << (h + 6) % 24 << ":" << setfill('0') << setw(2) << m << ":" << setfill('0') << setw(2) << s << endl;
}

int FlavioJosephus(int n, int k)
{
    if (n == 1)
        return 1;
    return (((FlavioJosephus(n - 1, k) + k - 1) % n) + 1);
}

int main()
{
    priority_queue<string, vector<string>, greater<string>> pqCrescente;
    priority_queue<string, vector<string>, less<string>> pqDecrescente; //Padrão (não precisa desse código)

    vector<string> v;
    //Ordena menor para o maior
    make_heap(v.begin(), v.end());
    sort_heap(v.begin(), v.end());

    //Ordena maior para o menor
    make_heap(v.rbegin(), v.rend());
    sort_heap(v.rbegin(), v.rend());
}