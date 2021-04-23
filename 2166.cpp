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

double CalculaRaiz(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1 / (2 + CalculaRaiz(n - 1));
    }
}

int main()
{
    int n;
    cin >> n;
    cout << setprecision(10) << fixed << 1 + CalculaRaiz(n) << endl;
}