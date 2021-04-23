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
    int ct, n;
    vector<int> v;
    cin >> ct;

    for (int i = 0; i < ct; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    if (v.size() == 1 || v.size() == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        int qtsEscadinhas = 1;
        int anterior = v[0] - v[1];
        int atual;
        for (int i = 2; i < v.size(); ++i)
        {

            atual = v[i - 1] - v[i];
            if (atual != anterior)
                anterior = atual, qtsEscadinhas++;
        }
        cout << qtsEscadinhas << endl;
    }
}