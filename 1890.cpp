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
        int c, d;
        cin >> c >> d;
        if (c == 0 && d == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (unsigned long long int)(pow(26, c) * pow(10, d)) << endl;
        }
    }
}