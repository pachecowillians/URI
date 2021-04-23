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
    while (cin >> ct)
    {
        int max = -1;
        for (int i = 0; i < ct; i++)
        {
            int n;
            cin >> n;
            if (n > max)
            {
                max = n;
            }
        }
        if (max < 10)
        {
            cout << 1 << endl;
        }
        else if (max >= 10 && max < 20)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
}