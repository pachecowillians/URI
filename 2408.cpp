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
    int a, b, c;
    cin >> a >> b >> c;
    int maior = max(a, max(b, c));
    int menor = min(a, min(b, c));
    if (a != maior && a != menor)
    {
        cout << a << endl;
    }
    else if (b != maior && b != menor)
    {
        cout << b << endl;
    }
    else if (c != maior && c != menor)
    {
        cout << c << endl;
    }
}