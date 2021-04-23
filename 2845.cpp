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

int MDC(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return MDC(b, a % b);
    }
}

int AchouValor(vector<int> v, int n)
{
    int achou = true;
    for (int i = 0; i < v.size() && achou; i++)
    {
        if (MDC(v[i], n) != 1)
        {
            achou == false;
        }
    }
    return achou;
}

int main()
{
    int ct;
    cin >> ct;
    int maxVal = -1;
    vector<int> v;
    for (int i = 0; i < ct; i++)
    {
        int n;
        cin >> n;
        if (n > maxVal)
        {
            maxVal = n;
        }
        v.push_back(n);
    }
    maxVal++;
    while (!AchouValor(v, maxVal))
    {
        maxVal++;
    }
    cout << maxVal << endl;
}