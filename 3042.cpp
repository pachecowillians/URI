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
            int pos = 2;
            int somaToques = 0;
            for (int i = 0; i < ct; i++)
            {
                int p1, p2, p3;
                bool v[3];
                cin >> v[0] >> v[1] >> v[2];
                if (v[pos - 1])
                {
                    if (pos == 1)
                    {
                        if (!v[1])
                        {
                            pos = 2;
                        }
                        else
                        {
                            pos = 3;
                            somaToques++;
                        }
                    }
                    else if (pos == 2)
                    {
                        if (!v[0])
                        {
                            pos = 1;
                        }
                        else
                        {
                            pos = 3;
                        }
                    }
                    else if (pos == 3)
                    {
                        if (!v[0])
                        {
                            pos = 1;
                            somaToques++;
                        }
                        else
                        {
                            pos = 2;
                        }
                    }
                    somaToques++;
                }
            }
            cout << somaToques << endl;
        }
    }
}