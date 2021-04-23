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
        int h, d, g;
        cin >> h >> d >> g;
        if (h >= 200 && h <= 300 && d >= 50 && g >= 150)
        {
            cout << "Sim" << endl;
        }
        else
        {
            cout << "Nao" << endl;
        }
    }
}