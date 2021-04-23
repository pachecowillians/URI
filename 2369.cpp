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
    int n;
    cin >> n;
    int soma = 7;
    if (n > 10)
    {
        soma += min(n - 10, 20);
    }
    if (n > 30)
    {
        soma += 2 * min(n - 30, 70);
    }
    if (n > 100)
    {
        soma += 5 * (n - 100);
    }
    cout << soma << endl;
}