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
    int xo = 1, yo = 1, xd = 1, yd = 1;
    while (xo != 0 || yo != 0 || xd != 0 || yd != 0)
    {
        cin >> xo >> yo >> xd >> yd;
        if (xo != 0 || yo != 0 || xd != 0 || yd != 0)
        {
            int dx = abs(xd - xo);
            int dy = abs(yd - yo);
            if (dx == 0 && dy == 0)
            {
                cout << 0 << endl;
            }
            else if (dx == dy || (dx == 0 && dy != 0) || (dy == 0 && dx != 0))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
}