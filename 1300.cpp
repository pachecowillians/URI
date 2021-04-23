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
    vector<int> h;
    vector<int> m;
    vector<bool> r(185, false);
    for (int i = 0; i <= 12; i++)
    {
        h.push_back((360 / 12) * i);
    }
    for (int i = 0; i <= 60; i++)
    {
        m.push_back((360 / 60) * i);
    }
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            int horario = max(h[i], m[j]) - min(h[i], m[j]);
            int antiHorario = 360 - max(h[i], m[j]) + min(h[i], m[j]);
            r[min(horario, antiHorario)] = true;
        }
    }

    int v;
    while (cin >> v)
    {
        if (r[v])
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
}