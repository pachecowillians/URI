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
    int p1, c1, p2, c2;
    cin >> p1 >> c1 >> p2 >> c2;
    if (p1 * c1 == p2 * c2)
    {
        cout << 0 << endl;
    }
    else if (p1 * c1 < p2 * c2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}