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
    double h, m;
    while (cin >> h >> m)
    {
        vector<double> v;
        double n = 0;
        double soma = 0;
        double med = 0;
        double prec = 0;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss;
        ss << s;
        double val;
        while (ss >> val)
        {
            v.push_back(val);
            soma += val;
            n++;
        }
        med = soma / n;
        soma = 0;
        for (int i = 0; i < n; i++)
        {
            soma += pow((v[i] - med), 2);
        }
        prec = sqrt(soma / (n - 1));
        cout << setprecision(5) << fixed << prec << endl;
    }
}