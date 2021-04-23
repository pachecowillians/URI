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
    int d, x, y, z;
    cin >> d >> x >> y >> z;
    if (d <= x && d <= y && d <= z)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
}