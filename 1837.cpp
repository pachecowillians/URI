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
    int a, b, c, d, e, f, q, r;
    cin >> a >> b;
    if (a < 0)
    {
        e = b;
        if (b < 0)
            e = b * -1;
        for (r = 0; r < e; r++)
        {
            f = a - r;
            if (f % b == 0)
                break;
        }
        q = f / b;
    }
    else
    {
        q = a / b;
        r = a % b;
    }
    cout << q << " " << r << endl;
}