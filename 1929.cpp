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

bool ExisteTriangulo(int a, int b, int c)
{
    if (abs(b - c) < a && a < b + c && abs(a - c) < b && b < a + c && abs(a - b) < c && c < a + b)
    {
        return true;
    }
    return false;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (ExisteTriangulo(a, b, c) || ExisteTriangulo(a, b, d) || ExisteTriangulo(a, c, d) || ExisteTriangulo(b, c, d))
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
}
