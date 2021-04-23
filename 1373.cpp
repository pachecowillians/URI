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

int lcs(string X, string Y, int k)
{
    int m = X.length();
    int n = Y.length();

    int L[m + 1][n + 1];
    int i, j, ans;

    /* Following steps build L[m+1][n+1] in bottom up fashion. Note  
      that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                L[i][j] = 0;
            }
            else
            {
                int m = max(L[i - 1][j], L[i][j - 1]);
                int n = 0;
                L[i][j] = m;
                while (i - 1 - n >= 0 and j - 1 - n >= 0 and X[i - 1 - n] == Y[j - 1 - n])
                {
                    n++;
                    if (n >= k)
                    {
                        L[i][j] = max(L[i][j], L[i - n][j - n] + n);
                    }
                }
            }
        }
    }

    /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
    return L[m][n];
}

int main()
{
    int n;
    while (n != 0)
    {
        cin >> n;
        cin.ignore();
        if (n != 0)
        {
            string s1, s2;
            getline(cin, s1);
            getline(cin, s2);

            cout << lcs(s1, s2, n) << endl;
        }
    }
}