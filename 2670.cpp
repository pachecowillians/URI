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
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a1, a2, a3;
    a1 = n2 * 2 + n3 * 4;
    a2 = n1 * 2 + n3 * 2;
    a3 = n1 * 4 + n2 * 2;
    cout << min(a1, min(a2, a3)) << endl;
}