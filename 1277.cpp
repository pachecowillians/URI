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
#include <stdio.h>
#include <stdlib.h>
using namespace std;

bool PassouFrequencia(string frequencia)
{
    float contFaltas = 0;
    float contTotal = 0;
    for (int i = 0; i < frequencia.length(); i++)
    {
        if (frequencia[i] == 'A')
        {
            contFaltas++;
        }
        if (frequencia[i] != 'M')
        {
            contTotal++;
        }
        }
    if ((contFaltas / contTotal) * 100 <= 25)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int n;
        bool primeiro = true;
        cin >> n;
        vector<string> vetAlunos;
        for (int j = 0; j < n; j++)
        {
            string nomeAluno;
            cin >> nomeAluno;
            vetAlunos.push_back(nomeAluno);
        }
        for (int j = 0; j < n; j++)
        {
            string frequencia;
            cin >> frequencia;
            if (!PassouFrequencia(frequencia))
            {
                if (primeiro)
                {
                    primeiro = false;
                }
                else
                {
                    cout << " ";
                }
                cout << vetAlunos[j];
            }
        }
        cout << endl;
    }
}