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
    double voltas, placas;
    cin >> voltas >> placas;
    for (double i = 1; i <= 9; i++)
    {
        if (i != 1)
        {
            cout << " ";
        }

        cout << (long long int)ceil(i * 10 * voltas * placas / 100);
    }
    cout << endl;
}