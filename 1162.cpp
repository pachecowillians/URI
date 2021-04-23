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

int OrdenaVetor(vector<int> v)
{
    int contTrocas = 0;
    while (v[0] != 1 || v[v.size() - 1] != v.size())
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != i + 1)
            {
                if (v[i] > i + 1)
                {
                    contTrocas++;
                    int aux = v[i];
                    v[i] = v[i + 1];
                    v[i + 1] = aux;
                }
                else if (v[i] < i + 1)
                {
                    contTrocas++;
                    int aux = v[i];
                    v[i] = v[i - 1];
                    v[i - 1] = aux;
                }
            }
        }
    }
    cout << "Vetor ordenado: " << endl;
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << endl;
    }
    cout << endl;
    return contTrocas;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int tamVet;
        cin >> tamVet;
        vector<int> v;
        for (int j = 0; j < tamVet; j++)
        {
            int n;
            cin >> n;
            v.push_back(n);
        }
        cout << "Optimal train swapping takes " << OrdenaVetor(v) << " swaps." << endl;
    }
}