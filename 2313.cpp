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
    bool existe = false;
    if (abs(b - c) < a && a < b + c && abs(a - c) < b && b < a + c && abs(a - b) < c && c < a + b)
    {
        existe = true;
    }
    if (!existe)
    {
        cout << "Invalido" << endl;
    }
    else
    {
        cout << "Valido-";
        if (a == b && b == c)
        {
            cout << "Equilatero" << endl;
        }
        else if (a == b || b == c || a == c)
        {
            cout << "Isoceles" << endl;
        }
        else
        {
            cout << "Escaleno" << endl;
        }
        if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2))
        {
            cout << "Retangulo: S" << endl;
        }
        else
        {
            cout << "Retangulo: N" << endl;
        }
    }
}