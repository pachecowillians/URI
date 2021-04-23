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
    int n = 1;
    while (n != 0)
    {
        cin >> n;
        if (n != 0)
        {
            int meio = ((n % 2 == 0) ? n / 2 : (n - 1) / 2);
            int m[n][n];

            int x = 1;

            for (int i = 0; i < n; i++)
            {
                int cont = x;
                m[i][i] = cont;

                for (int j = i; j < n; j++)
                {
                    m[i][j] = cont;
                    cont *= 2;
                }
                cont = x;
                for (int j = i; j < n; j++)
                {
                    m[j][i] = cont;
                    cont *= 2;
                }

                x = m[i][i] * 4;
            }
            string maxVal = to_string(m[n - 1][n - 1]);

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (j == 0)
                        printf("%*d", (int)maxVal.length(), m[i][j]);
                    else
                        printf(" %*d", (int)maxVal.length(), m[i][j]);
                }
                cout << endl;
            }
            cout << endl;
        }
    }
}