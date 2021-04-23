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

int NumeroDivisores(int n)
{
    int c = 2;
    for (int i = 2; i < ((int)floor(sqrt(n))) + 1; i++)
    {
        if (n % i == 0)
        {
            c += (n / i == i) ? 1 : 2;
        }
    }
    return c;
}

int main()
{
    int n, ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        cin >> n;
        if (NumeroDivisores(n) == 2)
        {
            cout << n << " eh primo" << endl;
        }
        else
        {
            cout << n << " nao eh primo" << endl;
        }
    }
}