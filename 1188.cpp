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
    char c;
    double soma = 0;
    double cont = 0;
    cin >> c;
    int x = 1;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            double n;
            cin >> n;
            if (i > 6 && !((j < 12 - i) || (j > 12 - i + x)))
            {
                soma += n;
                cont++;
            }
        }
        if (i > 6)
        {
            x += 2;
        }
    }
    if (c == 'S')
    {
        cout << setprecision(1) << fixed << soma << endl;
    }
    else
    {
        cout << setprecision(1) << fixed << soma / cont << endl;
    }
}