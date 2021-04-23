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
    int f, vo;
    while (cin >> f >> vo)
    {
        vector<bool> v(f, false);
        for (int i = 0; i < vo; i++)
        {
            int n;
            cin >> n;
            v[n - 1] = true;
        }
        if (f == vo)
        {
            cout << "*" << endl;
        }
        else
        {
            for (int i = 0; i < f; i++)
            {

                if (!v[i])
                {
                    cout << i + 1 << " ";
                }
            }
            cout << endl;
        }
    }
}