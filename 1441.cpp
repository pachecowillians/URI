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

int m = -1;

void SequenciaDeGranizo(int n)
{
    if (n > m)
    {
        m = n;
    }

    if (n != 1)
    {
        if (n % 2 == 0)
        {
            SequenciaDeGranizo(n / 2);
        }
        else
        {
            SequenciaDeGranizo(3 * n + 1);
        }
    }
}

int main()
{
    int n = 1;
    while (n != 0)
    {
        cin >> n;
        if (n != 0)
        {
            SequenciaDeGranizo(n);
            cout << m << endl;
            m = -1;
        }
    }
}