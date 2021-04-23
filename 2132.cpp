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

long long int CalculaNumero(string s)
{
    long long int ret = 0;
    long long int mult = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'b')
        {
            ret += mult;
        }
        mult *= 2;
    }
    return ret;
}

int main()
{
    string s;
    int i = 1;
    while (cin >> s)
    {
        cout << "Palavra " << i << endl;
        cout << CalculaNumero(s) << endl;
        i++;
        cout << endl;
    }
}