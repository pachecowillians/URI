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
    unsigned x, y, m;
    while (scanf("%u %u %u", &x, &y, &m) != EOF)
    {
        int a = x * y;
        for (int i = 0; i < m; i++)
        {
            unsigned xp, yp;
            scanf("%u %u", &xp, &yp);
            if ((x >= xp && y >= yp) || (y >= xp && x >= yp))
            {
                cout << "Sim" << endl;
            }
            else
            {
                cout << "Nao" << endl;
            }
        }
    }
}