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
    int x, y;
    cin >> x >> y;
    while (y <= x)
    {
        cin >> y;
    }
    int soma = x;
    int cont = 0;
    while (soma < y)
    {
        x++;
        soma += x;
        cont++;
    }
    cout << cont + 1 << endl;
}