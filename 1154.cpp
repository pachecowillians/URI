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
    int n = 0;
    double soma = 0;
    double cont = 0;
    while (n >= 0)
    {
        cin >> n;
        if (n >= 0)
        {
            soma += n;
            cont++;
        }
    }
    cout << setprecision(2) << fixed << soma / cont << endl;
}