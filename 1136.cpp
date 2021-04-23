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
    int n = 1, b = 1;
    while (n != 0 || b != 0)
    {
        cin >> n >> b;
        if (n != 0 || b != 0)
        {
            vector<int> vVal;
            for (int i = 0; i < b; i++)
            {
                int n;
                cin >> n;
                vVal.push_back(n);
            }
            vector<bool> v(n + 1, false);
            int tam = n + 1;
            for (int i = 0; i < vVal.size() && tam > 0; i++)
            {
                for (int j = 0; j < vVal.size() && tam > 0; j++)
                {
                    int n = abs(vVal[i] - vVal[j]);
                    if (!v[n])
                    {
                        tam--;
                        v[n] = true;
                    }
                }
            }
            if (tam > 0)
            {
                cout << "N" << endl;
            }
            else
            {
                cout << "Y" << endl;
            }
        }
    }
}