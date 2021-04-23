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

void Perfeito(int n)
{
    int soma = 0;
    for (int i = 1; i <= (int)(n / 2); i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }
    if (soma == n)
    {
        cout << n << " eh perfeito" << endl;
    }
    else
    {
        cout << n << " nao eh perfeito" << endl;
    }
}

int main()
{
    int ct;
    int n;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        cin >> n;
        Perfeito(n);
    }
}