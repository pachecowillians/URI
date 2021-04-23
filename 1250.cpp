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
    for (int i = 0; i < ct; i++)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        string s;
        cin >> s;
        int contPulos = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if ((s[j] == 'J' && v[j] > 2) || (s[j] == 'S' && v[j] <= 2))
            {
                contPulos++;
            }
        }
        cout << contPulos << endl;
    }
}