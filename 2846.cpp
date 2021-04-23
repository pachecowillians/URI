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
    int n;
    vector<int> v = {0, 1};
    unordered_map<int, bool> mapFib;

    mapFib[0] = true;
    mapFib[1] = true;

    for (int i = 0; i < 30; i++)
    {
        v.push_back(v.back() + v[v.size() - 2]);
        mapFib[v.back()] = true;
    }
    cin >> n;
    int i = 0;
    int cont = 0;
    while (cont < n)
    {
        if (mapFib[i])
        {
            i++;
        }
        else
        {
            cont++;
            i++;
        }
    }
    cout << i - 1 << endl;
}