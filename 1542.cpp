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
    int a, b, c;
    while (a != 0)
    {
        cin >> a;
        if (a != 0)
        {
            cin >> b >> c;
            int n = a * c * b / (c - a);
            if (n == 1)
            {
                cout << n << " pagina" << endl;
            }
            else
            {
                cout << n << " paginas" << endl;
            }
        }
    }
}