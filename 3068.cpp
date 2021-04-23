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
    pair<int, int> r0;
    pair<int, int> r1;
    r0 = make_pair(1, 1);
    r1 = make_pair(1, 1);
    int teste = 1;
    while (r0.first != 0 || r0.second != 0 || r1.first != 0 || r1.second != 0)
    {
        cin >> r0.first >> r0.second >> r1.first >> r1.second;
        if (r0.first != 0 || r0.second != 0 || r1.first != 0 || r1.second != 0)
        {
            int ct, somaPontos = 0;
            cin >> ct;
            for (int i = 0; i < ct; i++)
            {
                pair<int, int> p;
                cin >> p.first >> p.second;

                if (p.first >= r0.first && p.first <= r1.first && p.second <= r0.second && p.second >= r1.second)
                {
                    somaPontos++;
                }
            }
            cout << "Teste" << endl;
            cout << teste << endl;
            cout << somaPontos << endl;
            teste++;
        }
    }
}