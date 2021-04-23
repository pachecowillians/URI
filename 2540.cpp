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
    float ct;
    while (cin >> ct)
    {
        int voto, s = 0, n = 0;
        for (int i = 0; i < ct; i++)
        {
            cin >> voto;
            if (voto == 1)
            {
                s++;
            }
            else
            {
                n++;
            }
        }
        if (s >= ct * 2 / 3)
        {
            cout << "impeachment" << endl;
        }
        else
        {
            cout << "acusacao arquivada" << endl;
        }
    }
}