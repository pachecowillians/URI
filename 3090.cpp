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
    int n, m, s;
    cin >> n >> m >> s;
    int e1 = 0, e2 = 0;
    float l, c;
    l = m;
    c = n;
    float coef = l / c;
    for (int i = 0; i < s; i++)
    {
        int x, y, h;
        cin >> x >> y >> h;
        if (y >= x * coef)
        {
            e1 += h;
        }
        else
        {
            e2 += h;
        }
    }
    cout << e1 << " " << e2 << endl;
}