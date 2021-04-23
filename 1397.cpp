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
    int ct = 1;
    while (ct != 0)
    {
        cin >> ct;
        if (ct != 0)
        {
            int a, b;
            int p = 0, s = 0;
            for (int i = 0; i < ct; i++)
            {
                cin >> a >> b;
                if (a != b)
                {
                    if (a>b)
                    {
                        p++;
                    }
                    else
                    {
                        s++;
                    }
                }
            }
            cout << p << " " << s << endl;
        }
    }
}