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
    int n, p = 0, b = 0;
    cin >> n;
    if (n % 2 == 0)
    {
        p = (n * n) / 2;
        b = p;
    }
    else
    {
        p = (n * n) / 2;
        b = (n * n) / 2 + 1;
    }
    cout << b << " casas brancas e " << p << " casas pretas" << endl;
    return 0;
}