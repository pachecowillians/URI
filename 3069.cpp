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
    int tamanhoPraia = 1, ct = 1;
    int it = 1;
    while (tamanhoPraia != 0 || ct != 0)
    {
        cin >> tamanhoPraia >> ct;
        if (tamanhoPraia != 0 || ct != 0)
        {
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> filaIntervalos;
            vector<pair<int, int>> v;
            int maxVal = -1;
            for (int i = 0; i < ct; i++)
            {
                pair<int, int> intervalo;
                cin >> intervalo.first >> intervalo.second;
                filaIntervalos.push(intervalo);
            }
            while (!filaIntervalos.empty())
            {
                if (v.empty())
                {
                    v.push_back(filaIntervalos.top());
                }
                else
                {
                    if (filaIntervalos.top().first <= v.back().second && filaIntervalos.top().second > v.back().second)
                    {
                        v.back().second = filaIntervalos.top().second;
                    }
                    else if (filaIntervalos.top().first > v.back().second)
                    {
                        v.push_back(filaIntervalos.top());
                    }
                }

                filaIntervalos.pop();
            }
            cout << "Teste " << it << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i].first << " " << v[i].second << endl;
            }
            cout << endl;
            it++;
        }
    }
}