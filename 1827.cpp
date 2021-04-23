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
        int pd1 = 0;
        int pd2 = n - 1;
        int c0 = -1;
        int c1 = -1;
        int posLimite = n / 3;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (pd1 == pd2 && j == i)
                {
                    cout << 4;
                }
                else if (j == pd1)
                {
                    if (i < posLimite || i > n - 1 - posLimite)
                    {
                        cout << 2;
                    }
                    else
                    {
                        cout << 1;
                        if (c0 == -1)
                        {
                            c0 = j;
                        }
                    }
                }
                else if (j == pd2)
                {
                    if (i < posLimite || i > n - 1 - posLimite)
                    {
                        cout << 3;
                    }
                    else
                    {
                        cout << 1;
                        if (c1 == -1)
                        {
                            c1 = j;
                        }
                    }
                }
                else if (((j >= c0 && j <= c1 && c0 != -1 && c1 != -1) || (j > c0 && c0 != -1 && c1 == -1)) && i >= posLimite && i <= n - 1 - posLimite)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            pd1++;
            pd2--;

            cout << endl;
        }
        cout << endl;
    }
}