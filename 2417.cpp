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
    int c1, c2, c3, f1, f2, f3;
    cin >> c1 >> c2 >> c3 >> f1 >> f2 >> f3;
    if (c1 * 3 + c2 > f1 * 3 + f2)
    {
        cout << "C" << endl;
    }
    else if (c1 * 3 + c2 < f1 * 3 + f2)
    {
        cout << "F" << endl;
    }
    else
    {
        if (c3 > f3)
        {
            cout << "C" << endl;
        }
        else if (c3 < f3)
        {
            cout << "F" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
}