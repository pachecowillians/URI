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
        int n, p = 0;
        vector<char> v;
        cin >> n;
        cin.ignore();
        for (int l = 0; l < n; l++)
        {
            string s;
            getline(cin, s);
            if (s == "RIGHT")
            {
                p++;
                v.push_back('r');
            }
            else if (s == "LEFT")
            {
                p--;
                v.push_back('l');
            }
            else
            {
                stringstream ss;
                int pos;
                ss << s;
                ss >> s >> s >> pos;
                v.push_back(v[pos - 1]);
                if (v.back() == 'r')
                {
                    p++;
                }
                else if (v.back() == 'l')
                {
                    p--;
                }
            }
        }
        cout << p << endl;
    }
}