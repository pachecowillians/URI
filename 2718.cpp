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

string ConverteParaBinario(long long int n)
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

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        long long int n;
        cin >> n;
        string s = ConverteParaBinario(n);
        long long int maxDefeito = 0;
        long long int cont = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                cont++;
            }
            else
            {
                if (cont > maxDefeito)
                {
                    maxDefeito = cont;
                }
                cont = 0;
            }
        }
        if (cont > maxDefeito)
        {
            maxDefeito = cont;
        }
        cont = 0;
        cout << maxDefeito << endl;
    }
}