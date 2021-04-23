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
    cin >> ct;
    for (int k = 0; k < ct; k++)
    {
        int n, c, pos = -1, d = 1000000;
        bool igual = false;
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            if (abs(v - c) < d && !igual)
            {
                if (v == c)
                {
                    igual = true;
                }
                d = abs(v - c);
                pos = i + 1;
            }
        }
        cout << pos << endl;
    }
}