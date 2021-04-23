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

string a;
int matPD[1200][1200];

bool PD(string s, int n, int pos, int resto)
{
    if (matPD[pos][resto] != -1)
    {
        return matPD[pos][resto];
    }
    else if (pos != s.length())
    {
        if (s[pos] == '?')
        {
            int i = 0;
            if (pos == 0)
            {
                i++;
            }

            for (; i < 10; i++)
            {
                s[pos] = (char)(i + '0');
                if (PD(s, n, pos + 1, (resto * 10 + (s[pos] - '0')) % n))
                {
                    a[pos] = s[pos];
                    return 1;
                }
            }
        }
        else
        {
            return PD(s, n, pos + 1, (resto * 10 + (s[pos] - '0')) % n);
        }
    }
    else
    {
        return (resto == 0);
    }
    matPD[pos][resto] = 0;
    return 0;
}

int main()
{
    string s;
    int n;
    cin >> s >> n;
    a = s;
    memset(matPD, -1, sizeof(matPD));
    cout << (PD(s, n, 0, 0) ? a : "*") << endl;
}