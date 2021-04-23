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
    int orig = 1, p = 1;
    while (orig != 0 || p != 0)
    {
        cin >> orig >> p;
        if (orig != 0 || p != 0)
        {
            unordered_map<int, int> m;
            vector<int> v;
            for (int i = 0; i < p; i++)
            {
                int n;
                cin >> n;
                if (m.count(n) == 0)
                {
                    v.push_back(n);
                    m[n] = 1;
                }
                else
                {
                    m[n]++;
                }
            }
            int cont = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (m[v[i]] > 1)
                {
                    cont++;
                }
            }
            cout << cont << endl;
        }
    }
}