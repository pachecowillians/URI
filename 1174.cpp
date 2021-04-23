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
    for (int i = 0; i < 100; i++)
    {
        double n;
        cin >> n;
        if (n <= 10)
        {
            cout << "A[" << i << "] = " << setprecision(1) << fixed << n << endl;
        }
    }
}