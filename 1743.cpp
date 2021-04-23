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
    vector<int> vIn(5);
    int pode = true;
    for (int i = 0; i < 5; i++)
    {
        cin >> vIn[i];
    }
    for (int i = 0; i < 5; i++)
    {
        int v;
        cin >> v;
        if (vIn[i] == v)
        {
            pode = false;
        }
    }
    if (pode)
    {
        cout << "Y" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
}