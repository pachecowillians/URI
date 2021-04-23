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
    int ct;
    while (cin >> ct)
    {
        unordered_map<int, pair<int, int>> m;
        vector<int> v;
        for (int i = 0; i < ct; i++)
        {
            int n;
            char c;
            cin >> n >> c;
            if (m.count(n) == 0)
            {
                if (c == 'D')
                {
                    m[n].second++;
                }
                else
                {
                    m[n].first++;
                }
                v.push_back(n);
            }
            else
            {
                if (c == 'D')
                {
                    m[n].second++;
                }
                else
                {
                    m[n].first++;
                }
            }
        }
        int cont = 0;
        for (int i = 0; i < v.size(); i++)
        {
            cont += min(m[v[i]].first, m[v[i]].second);
        }
        cout << cont << endl;
    }
}