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
    int a = 1, d = 1;
    while (a != 0 || d != 0)
    {
        cin >> a >> d;
        if (a != 0 || d != 0)
        {
            int mina = INT_MAX;
            int mind = INT_MAX;
            int secMind = INT_MAX;
            for (int i = 0; i < a; i++)
            {
                int va;
                cin >> va;
                if (va < mina)
                {
                    mina = va;
                }
            }
            for (int i = 0; i < d; i++)
            {
                int vd;
                cin >> vd;
                if (vd < mind)
                {
                    secMind = mind;
                    mind = vd;
                }
                else if (vd < secMind)
                {
                    secMind = vd;
                }
            }
            if (mina >= secMind || (mina == secMind && mina == mind))
            {
                cout << "N" << endl;
            }
            else
            {
                cout << "Y" << endl;
            }
        }
    }
}