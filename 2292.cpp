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
    for (int i = 0; i < ct; i++)
    {
        string s;
        long long int n;
        cin >> s >> n;
        long long int vezesApagou = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'X')
            {
                if (n % 2 == 0)
                {
                    vezesApagou = n / 2;
                    cout << "X";
                }
                else
                {
                    vezesApagou = (n - 1) / 2;
                    cout << "O";
                }
            }
            else
            {
                if (n % 2 == 0)
                {
                    vezesApagou = n / 2;
                    cout << "O";
                }
                else
                {
                    vezesApagou = (n + 1) / 2;
                    cout << "X";
                }
            }

            n = vezesApagou;
        }
        cout << endl;
    }
}