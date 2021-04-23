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
    vector<string> v;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        int contResultados = 0;
        int maxLen = -1;

        cin >> s;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j].substr(0, s.length()) == s)
            {
                contResultados++;
                if ((int)v[j].length() > maxLen)
                {
                    maxLen = v[j].length();
                }
            }
        }
        if (contResultados > 0)
        {
            cout << contResultados << " ";
        }

        cout << maxLen << endl;
    }
}