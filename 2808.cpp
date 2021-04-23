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
    string inicio, fim;
    cin >> inicio >> fim;
    int n1, n2;
    char c1, c2;
    bool pode = false;
    n1 = inicio[1] - '0';
    n2 = fim[1] - '0';
    c1 = inicio[0];
    c2 = fim[0];
    if (n1 + 1 == n2 && (char)(c1 - 2) == c2)
    {
        pode = true;
    }
    else if (n1 + 2 == n2 && (char)(c1 - 1) == c2)
    {
        pode = true;
    }
    else if (n1 + 2 == n2 && (char)(c1 + 1) == c2)
    {
        pode = true;
    }
    else if (n1 + 1 == n2 && (char)(c1 + 2) == c2)
    {
        pode = true;
    }
    else if (n1 - 1 == n2 && (char)(c1 - 2) == c2)
    {
        pode = true;
    }
    else if (n1 - 2 == n2 && (char)(c1 - 1) == c2)
    {
        pode = true;
    }
    else if (n1 - 2 == n2 && (char)(c1 + 1) == c2)
    {
        pode = true;
    }
    else if (n1 - 1 == n2 && (char)(c1 + 2) == c2)
    {
        pode = true;
    }
    if (pode)
    {
        cout << "VALIDO" << endl;
    }
    else
    {
        cout << "INVALIDO" << endl;
    }
}