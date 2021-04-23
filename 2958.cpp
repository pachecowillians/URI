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
    int l, c;
    priority_queue<int> v;
    priority_queue<int> d;
    cin >> l >> c;
    for (int i = 0; i < l; i++)
    {
        for (int i = 0; i < c; i++)
        {
            string s;
            cin >> s;
            if (s[1] == 'V')
            {
                v.push(s[0] - '0');
            }
            else
            {
                d.push(s[0] - '0');
            }
        }
    }
    while (!v.empty())
    {
        cout << v.top() << "V" << endl;
        v.pop();
    }
    while (!d.empty())
    {
        cout << d.top() << "D" << endl;
        d.pop();
    }
}