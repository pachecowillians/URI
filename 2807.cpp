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
    vector<int> v = {1, 1};
    cin >> n;
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            v.push_back(v.back() + v[v.size() - 2]);
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (i != v.size() - 1)
            {
                cout << " ";
            }
            cout << v[i];
        }
        cout << endl;
    }
}