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
    long long int n1 = 1, n2 = 1;
    while (n1 != 0 || n2 != 0)
    {
        cin >> n1 >> n2;
        if (n1 != 0 || n2 != 0)
        {
            cout << n1 * 3 - n1 - n2 << endl;
        }
    }
}