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
            for (int i = 0; i < ct; i++)
            {
                int a, b, c, d, e;
                cin >> a >> b >> c >> d >> e;
                if (a <= 127 && b > 127 && c > 127 && d > 127 && e > 127)
                {
                    cout << "A" << endl;
                }
                else if (a > 127 && b <= 127 && c > 127 && d > 127 && e > 127)
                {
                    cout << "B" << endl;
                }
                else if (a > 127 && b > 127 && c <= 127 && d > 127 && e > 127)
                {
                    cout << "C" << endl;
                }
                else if (a > 127 && b > 127 && c > 127 && d <= 127 && e > 127)
                {
                    cout << "D" << endl;
                }
                else if (a > 127 && b > 127 && c > 127 && d > 127 && e <= 127)
                {
                    cout << "E" << endl;
                }
                else
                {
                    cout << "*" << endl;
                }
            }
        }
    }
}