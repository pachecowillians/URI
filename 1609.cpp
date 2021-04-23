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
        int n;
        int c = 0;
        unordered_map<int, bool> m;
        cin >> n;
        for (int l = 0; l < n; l++)
        {
            int v;
            cin >> v;
            if (m.count(v) == 0)
            {
                m[v] = true;
                c++;
            }
        }
        cout<<c<<endl;
    }
}