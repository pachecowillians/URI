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
            pair<int, int> p;
            cin >> p.first >> p.second;
            for (int i = 0; i < n; i++)
            {
                pair<int, int> v;
                cin >> v.first >> v.second;
                if (v.first == p.first || v.first == p.second || v.second == p.first || v.second == p.second)
                {
                    cout << "divisa" << endl;
                }
                else if (v.first > p.first && v.second > p.second)
                {
                    cout << "NE" << endl;
                }
                else if (v.first < p.first && v.second > p.second)
                {
                    cout << "NO" << endl;
                }
                else if (v.first > p.first && v.second < p.second)
                {
                    cout << "SE" << endl;
                }
                else if (v.first < p.first && v.second < p.second)
                {
                    cout << "SO" << endl;
                }
            }
        }
    }
}