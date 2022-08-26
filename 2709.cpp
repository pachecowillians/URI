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

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int m;
    while (cin >> m)
    {
        int v[m], jump;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        cin >> jump;
        int i = 0;
        int soma = 0;
        while (m - jump * i - 1 >= 0)
        {
            soma += v[m - jump * i - 1];
            i++;
        }

        if (isPrime(soma))
        {
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        }
        else
        {
            cout << "Bad boy! I’ll hit you." << endl;
        }
    }

    return 0;
}