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
    string s;
    while (cin >> s)
    {
        int j = 0;
        long long int soma = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            int pos = s[i] - 'A';
            soma += pos * pow(26, j);
            j++;
        }
        cout << soma << endl;
    }
}