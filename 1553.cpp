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
    int l = 1, c = 1;
    while (l != 0 || c != 0)
    {
        cin >> l >> c;
        if (l != 0 || c != 0)
        {
            vector<int> v(c, 0);
            unordered_map<int, int> m;
            for (int i = 0; i < l; i++)
            {
                int val;
                cin >> val;
                if (m.count(val) == 0)
                {
                    v.push_back(val);
                }

                m[val]++;
            }
            int cont = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (m[v[i]] >= c)
                {
                    cont++;
                }
            }
            cout << cont << endl;
        }
    }
}