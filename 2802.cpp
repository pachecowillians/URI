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
    long long int n, r;
    cin >> n;
    r = 1 + (((n - 1) * n) / 2) + (((n) * (n - 1) * (n - 2) * (n - 3)) / 24);
    cout << r << endl;
}