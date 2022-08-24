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
    double f1, f2;
    cin >> f1 >> f2;
    cout << fixed << setprecision(6) << ((((1.0 + f1/100.00) * (1.0 + f2/100.00)) - 1.0) * 100.0) << endl;
    return 0;
}