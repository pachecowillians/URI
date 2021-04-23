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

double Calcula(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1 / (6 + Calcula(n - 1));
    }
}

int main()
{
    int n;
    cin >> n;
    double tres = 3;
    cout << setprecision(10) << fixed << tres + Calcula(n) << endl;
}