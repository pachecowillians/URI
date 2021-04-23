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

vector<bool> Troca(vector<bool> v, int n1, int n2)
{
    bool aux = v[n1];
    v[n1] = v[n2];
    v[n2] = aux;
    return v;
}

int main()
{
    int ct;
    char posInicial = '_';
    vector<bool> v(3, false);
    cin >> ct >> posInicial;
    v[posInicial - 'A'] = true;
    for (int i = 0; i < ct; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            v = Troca(v, 0, 1);
        }
        else if (n == 2)
        {
            v = Troca(v, 1, 2);
        }
        else if (n == 3)
        {
            v = Troca(v, 0, 2);
        }
    }
    if (v[0])
    {
        cout << "A" << endl;
    }
    else if (v[1])
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "C" << endl;
    }
}