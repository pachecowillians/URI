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
    int count = 0;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        if (s == "P=NP")
        {
            cout << "skipped" << endl;
        }
        else
        {
            int a, b;
            sscanf(s.c_str(), "%d+%d", &a, &b);
            cout << a + b << endl;
        }
    }

    return 0;
}