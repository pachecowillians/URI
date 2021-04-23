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
    int tam;
    cin >> tam;
    vector<bool> v(tam, false);
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int n;
        cin >> n;
        if (!v[n])
        {
            v[n] = true;
            tam--;
        }
    }
    cout << tam << endl;
}