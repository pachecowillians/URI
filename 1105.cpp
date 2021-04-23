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
    int b = 1, n = 1;
    while (b != 0 || n != 0)
    {
        cin >> b >> n;
        int v[b];
        if (b != 0 || n != 0)
        {
            for (int i = 0; i < b; i++)
            {
                cin >> v[i];
            }
            for (int i = 0; i < n; i++)
            {
                int o, d, val;
                cin >> o >> d >> val;

                v[o - 1] -= val;
                v[d - 1] += val;
            }
            bool pode = true;
            for (int i = 0; i < b; i++)
            {
                if (v[i] < 0)
                {
                    pode = false;
                }
            }

            if (pode)
            {
                cout << "S" << endl;
            }
            else
            {
                cout << "N" << endl;
            }
        }
    }
}