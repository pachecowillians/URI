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
    int n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    if (n1 > n2 && n2 > n3 && n3 > n4 && n4 > n5)
    {
        cout << "D" << endl;
    }
    else if (n1 < n2 && n2 < n3 && n3 < n4 && n4 < n5)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
}