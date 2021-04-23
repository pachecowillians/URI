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
    int l = 1;
    while (l != 0)
    {
        cin >> l;
        if (l != 0)
        {
            int c, p;
            cin >> c >> p;
            double a = c * l * 100 / p;
            int tamLado = sqrt(a);
            cout << tamLado << endl;
        }
    }
}