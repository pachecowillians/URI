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
    int it = 1;
    while (cin >> n)
    {
        vector<int> v;
        for (int i = 0; i <= n; i++)
        {
            v.push_back(i);
            for (int j = 0; j < i - 1; j++)
            {
                v.push_back(i);
            }
        }
        cout << "Caso " << it << ": " << v.size() << " numero";
        if (v.size() > 1)
        {
            cout << "s";
        }
        cout << endl;
        for (int i = 0; i < v.size(); i++)
        {
            if (i != 0)
            {
                cout << " ";
            }
            cout << v[i];
        }
        cout << endl
             << endl;

        it++;
    }
}