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
    int l, c;
    cin >> l >> c;
    int m[l][c];
    vector<pair<int, int>> v;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m[i][j];
            if (m[i][j] == 42)
            {
                v.push_back(make_pair(i, j));
            }
        }
    }
    bool achou = false;
    for (int i = 0; i < v.size() && !achou; i++)
    {
        if (v[i].first > 0 && v[i].second > 0 && v[i].first < l - 1 && v[i].second < c - 1)
        {
            int x = v[i].first;
            int y = v[i].second;
            if (m[x - 1][y] == 7 && m[x + 1][y] == 7 && m[x][y - 1] == 7 && m[x][y + 1] == 7 && m[x - 1][y - 1] == 7 && m[x + 1][y - 1] == 7 && m[x - 1][y + 1] == 7 && m[x + 1][y + 1] == 7)
            {
                achou = true;
                cout << x + 1 << " " << y + 1 << endl;
            }
        }
    }
    if (!achou)
    {
        cout << 0 << " " << 0 << endl;
    }
}
