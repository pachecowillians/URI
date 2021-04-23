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
    double v1, v2;
    v1 = 234.345;
    v2 = 45.698;
    cout << setprecision(6) << fixed << v1 << " - " << v2 << endl;
    cout << setprecision(0) << fixed << v1 << " - " << v2 << endl;
    cout << setprecision(1) << fixed << v1 << " - " << v2 << endl;
    cout << setprecision(2) << fixed << v1 << " - " << v2 << endl;
    cout << setprecision(3) << fixed << v1 << " - " << v2 << endl;
    printf("%e - %e\n", v1, v2);
    printf("%E - %E\n", v1, v2);
    cout << "234.345 - 45.698" << endl;
    cout << "234.345 - 45.698" << endl;
}