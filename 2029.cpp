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
    double v, d;
    while (cin >> v)
    {
        cin >> d;
        double a = 3.14 * pow(d / 2, 2);
        double h = v / a;
        cout << setprecision(2) << fixed << "ALTURA = " << h << endl;
        cout << setprecision(2) << fixed << "AREA = " << a << endl;
    }
}