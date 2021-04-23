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

int main()
{
    int preco = 1, pago = 1;
    unordered_map<int, bool> mapNotas;
    vector<int> v = {
        2,
        5,
        10,
        20,
        50,
        100};

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            mapNotas[v[i] + v[j]] = true;
        }
    }

    while (preco != 0 || pago != 0)
    {
        cin >> preco >> pago;
        if (preco != 0 && pago != 0)
        {
            if (mapNotas[pago - preco])
            {
                cout << "possible" << endl;
            }
            else
            {
                cout << "impossible" << endl;
            }
        }
    }
}