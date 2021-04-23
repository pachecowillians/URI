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
    int h = 0;
    int anterior = -1;
    while (l != 0 || c != 0)
    {
        cin >> l >> c;
        if (l != 0 || c != 0)
        {
            for (int i = 0; i < c; i++)
            {
                int n;
                cin >> n;
                if (i == 0)
                {
                    h = l - n;
                }
                else
                {
                    if (n < anterior)
                    {
                        h += anterior - n;
                    }
                }
                anterior = n;
            }
            cout << h << endl;
        }
    }
}