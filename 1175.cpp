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
    int v[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> v[20 - i - 1];
    }

    for (int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << v[i] << endl;
    }
}