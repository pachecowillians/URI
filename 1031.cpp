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

int CalculaUltimo(int n, int k)
{
    int r = 0;
    for (int i = 1; i < n; i++)
    {
        r = (r + k) % i;
    }
    return r + 2;
}

int main()
{
    int n = 1;
    while (n != 0)
    {
        cin >> n;
        if (n != 0)
        {
            int i = 1;
            while (CalculaUltimo(n, i) != 13)
            {
                i++;
            }
            cout << i << endl;
        }
    }
}

//Me dá o número de regiões e tenho que descobrir o número de divisões que faz a região 13 ser a última