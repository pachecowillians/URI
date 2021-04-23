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
    int l, c;
    while (cin >> l >> c)
    {
        int v = 0;
        for (int i = 0; i < l; i++)
        {
            bool todas = true;
            for (int j = 0; j < c; j++)
            {
                int n;
                cin >> n;
                if (n == 0)
                {
                    todas = false;
                }
            }
            if (todas)
            {
                v++;
            }
        }
        cout << v << endl;
    }
}