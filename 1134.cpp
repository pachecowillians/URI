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
    unordered_map<int, int> m;
    while (n != 4)
    {
        cin >> n;
        if (n < 1 || n > 4)
        {
            while (n < 1 || n > 4)
            {
                cin >> n;
            }
        }
        m[n]++;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << m[1] << endl;
    cout << "Gasolina: " << m[2] << endl;
    cout << "Diesel: " << m[3] << endl;
}