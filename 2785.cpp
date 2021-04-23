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

long long int matVal[100][100];

long long int somaLinha[100][100]; //Soma da linha i começando na coluna j

long long int CalculaMenor(int n, int colunaComeco, int linha)
{
    if (somaLinha[linha][colunaComeco] == -1)
    {
        long long int soma = 0;
        for (int i = colunaComeco; i < colunaComeco + linha + 1; i++)
        {
            soma += matVal[linha][i];
        }
        if (linha == n - 1)
        {
            somaLinha[linha][colunaComeco] = soma;
            return soma;
        }
        else
        {
            if (colunaComeco == 0)
            {
                soma += CalculaMenor(n, colunaComeco, linha + 1);
            }
            else if (colunaComeco + linha == n - 1)
            {
                soma += CalculaMenor(n, colunaComeco - 1, linha + 1);
            }
            else
            {
                soma += min(CalculaMenor(n, colunaComeco - 1, linha + 1), CalculaMenor(n, colunaComeco, linha + 1));
            }
            somaLinha[linha][colunaComeco] = soma;
            return soma;
        }
    }
    else
    {
        return somaLinha[linha][colunaComeco];
    }
}

int main()
{
    int n;
    cin >> n;
    memset(somaLinha, -1, sizeof(somaLinha));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matVal[i][j];
        }
    }
    int men = 0;
    for (int i = 0; i < n; i++)
    {
        int v = CalculaMenor(n, i, 0);
        if (i == 0)
        {
            men = v;
        }
        else if (v < men)
        {
            men = v;
        }
    }
    cout << men << endl;
}