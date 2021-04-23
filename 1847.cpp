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
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    if (d2 < d1 && d3 >= d2)
    {
        cout << ":)" << endl;
    }
    else if (d2 > d1 && (d3 < d2 || d3 == d2))
    {
        cout << ":(" << endl;
    }
    else if (d2 > d1 && d3 > d2 && d3 - d2 < d2 - d1)
    {
        cout << ":(" << endl;
    }
    else if (d2 > d1 && d3 > d2 && d3 - d2 >= d2 - d1)
    {
        cout << ":)" << endl;
    }
    else if (d2 < d1 && d3 < d2 && d2 - d3 < d1 - d2)
    {
        cout << ":)" << endl;
    }
    else if (d2 < d1 && d3 < d2 && d2 - d3 >= d1 - d2)
    {
        cout << ":(" << endl;
    }
    else if (d1 == d2 && d3 > d2)
    {
        cout << ":)" << endl;
    }
    else
    {
        cout << ":(" << endl;
    }
}