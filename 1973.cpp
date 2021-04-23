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
    vector<long long int> v;
    long long int numCarneiros = 0;
    for (int i = 0; i < ct; i++)
    {
        long long int n;
        cin >> n;
        numCarneiros += n;
        v.push_back(n);
    }
    int i = 0;
    unordered_map<int, bool> m;
    int contEstrelasVisitadas = 0;
    while (i >= 0 && i < v.size())
    {
        if (!m[i])
        {
            m[i] = true;
            contEstrelasVisitadas++;
        }
        if (v[i] % 2 == 0)
        {
            if (v[i] > 0)
            {
                v[i]--;
                numCarneiros--;
            }
            i--;
        }
        else
        {
            if (v[i] > 0)
            {
                v[i]--;
                numCarneiros--;
            }
            i++;
        }
    }
    cout << contEstrelasVisitadas << " " << numCarneiros << endl;
}