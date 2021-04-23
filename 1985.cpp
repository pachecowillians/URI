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
    unordered_map<string, float> mapCardapio = {
        {"1001", 1.50},
        {"1002", 2.50},
        {"1003", 3.50},
        {"1004", 4.50},
        {"1005", 5.50},
    };
    int ct;
    float soma = 0;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        float qtde;
        cin >> s >> qtde;
        soma += mapCardapio[s] * qtde;
    }
    cout << setprecision(2) << fixed << soma << endl;
}