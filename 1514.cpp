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
    int l = 1, c = 1;
    while (l != 0 || c != 0)
    {
        cin >> l >> c;
        if (l != 0 || c != 0)
        {
            bool c1 = true;
            bool c2 = true;
            bool c3 = true;
            bool c4 = true;
            vector<bool> v(c, false);
            vector<int> v2(c, 0);

            for (int i = 0; i < l; i++)
            {
                bool fezTodos = true;
                bool fezAlgum = false;
                for (int j = 0; j < c; j++)
                {
                    bool n;
                    cin >> n;
                    v2[j] += n;
                    if (!n)
                    {
                        fezTodos = false;
                    }
                    else
                    {
                        v[j] = true;
                        fezAlgum = true;
                    }
                }
                if (fezTodos)
                {
                    c1 = false;
                }
                if (!fezAlgum)
                {
                    c4 = false;
                }
            }
            for (int i = 0; i < c; i++)
            {
                if (!v[i])
                {
                    c2 = false;
                }
                if (v2[i] == l)
                {
                    c3 = false;
                }
            }

            cout << c1 + c2 + c3 + c4 << endl;
        }
    }
}