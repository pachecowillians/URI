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
    int f0, b0, m0;
    int f1, b1, m1;
    cin >> f0 >> b0 >> m0;
    cin >> f1 >> b1 >> m1;
    int soma = 0;
    if (f0 - f1 < 0)
    {
        soma += abs(f0 - f1);
    }
    if (b0 - b1 < 0)
    {
        soma += abs(b0 - b1);
    }
    if (m0 - m1 < 0)
    {
        soma += abs(m0 - m1);
    }
    cout << soma << endl;
}