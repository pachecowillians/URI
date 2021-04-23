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
    int n;
    while (cin >> n)
    {
        int cont1, cont2;
        cont1 = 0;
        cont2 = n - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == cont2)
                {
                    cout << 2;
                }
                else if (j == cont1)
                {
                    cout << 1;
                }
                else
                {
                    cout << 3;
                }
            }
            cont1++;
            cont2--;
            cout << endl;
        }
    }
}