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
    int n = 1;
    while (n != 0)
    {
        cin >> n;
        if (n != 0)
        {
            int val;
            int max = -1;
            int min = INT_MAX;
            vector<int> v;
            int j = n - 1;
            for (int i = 0; i < 2 * n; i++)
            {
                cin >> val;
                if (i < n)
                {
                    v.push_back(val);
                }
                else
                {
                    v[j] += val;
                    if (v[j] > max)
                    {
                        max = v[j];
                    }
                    if (v[j] < min)
                    {
                        min = v[j];
                    }
                    j--;
                }
            }
            cout << max << " " << min << endl;
        }
    }
}