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
        int a, b, c, d;
        char x;
        int p1 = 0, p2 = 0;
        cin >> a >> x >> b >> c >> x >> d;
        if (a > b)
        {
            p1 += 3;
        }
        else if (b > a)
        {
            p2 += 3;
        }
        else
        {
            p1++;
            p2++;
        }
        if (d > c)
        {
            p1 += 3;
        }
        else if (c > d)
        {
            p2 += 3;
        }
        else
        {
            p1++;
            p2++;
        }

        if (p1 > p2)
        {
            cout << "Time 1" << endl;
        }
        else if (p2 > p1)
        {
            cout << "Time 2" << endl;
        }
        else if (a + d > c + b)
        {
            cout << "Time 1" << endl;
        }
        else if (c + b > a + d)
        {
            cout << "Time 2" << endl;
        }
        else if (b > d)
        {
            cout << "Time 2" << endl;
        }
        else if (d > b)
        {
            cout << "Time 1" << endl;
        }
        else
        {
            cout << "Penaltis" << endl;
        }
    }
}