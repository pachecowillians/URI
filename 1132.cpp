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
    int comeco, fim;
    cin >> comeco >> fim;
    if (comeco > fim)
    {
        int aux = fim;
        fim = comeco;
        comeco = aux;
    }

    long long int soma = 0;
    for (int i = comeco; i <= fim; i++)
    {
        if (i % 13 != 0)
        {
            soma += i;
        }
    }
    cout << soma << endl;
}