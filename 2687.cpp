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
    int ct;
    cin >> ct;
    for (int k = 0; k < ct; k++)
    {
        int n;
        cin >> n;
        int m[n][n];
        float contTotal = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (m[i][j] == 1)
                {
                    contTotal++;
                }
                else
                {
                    int achou = false;
                    int l = i;
                    int c = j;
                    while (!achou && l >= 0)
                    {
                        if (m[l][j] == 1)
                        {
                            achou = 1;
                        }
                        l--;
                    }
                    if (achou)
                    {
                        achou = false;
                        l = i;
                        while (!achou && l < n)
                        {
                            if (m[l][j] == 1)
                            {
                                achou = 1;
                            }
                            l++;
                        }
                        if (achou)
                        {
                            achou = false;
                            while (!achou && c >= 0)
                            {
                                if (m[i][c] == 1)
                                {
                                    achou = 1;
                                }
                                c--;
                            }
                            if (achou)
                            {
                                achou = false;
                                c = j;
                                while (!achou && c < n)
                                {
                                    if (m[i][c] == 1)
                                    {
                                        achou = 1;
                                    }
                                    c++;
                                    ;
                                }
                                if (achou)
                                {
                                    contTotal++;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << setprecision(2) << fixed << contTotal / 2 << endl;
    }
}