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
        string s;
        cin >> s;
        int r, g, b;
        cin >> r >> g >> b;
        cout << "Caso #" << i + 1 << ": ";
        if (s == "min")
        {
            cout << min(r, min(g, b)) << endl;
        }
        else if (s == "max")
        {
            cout << max(r, max(g, b)) << endl;
        }
        else if (s == "mean")
        {
            cout << (r + g + b) / 3 << endl;
        }
        else if (s == "eye")
        {
            cout << (int)(r * 0.3 + 0.59 * g + b * 0.11) << endl;
        }
    }
}