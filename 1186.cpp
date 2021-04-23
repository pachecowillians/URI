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
    cin >> c;
    float n;
    float soma = 0;
    float cont = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> n;
            if (i > 0 && j > 11 - i)
            {
                soma += n;
                cont++;
            }
        }
    }
    cout << setprecision(1) << fixed << ((c == 'S') ? soma : soma / cont) << endl;
}