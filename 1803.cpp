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
using namespace std;

int main()
{
    string s;
    vector<string> v;
    while (getline(cin, s))
    {
        v.push_back(s);
    }

    //Calculando string

    string f = "", l = "";
    vector<int> vInt;

    for (int i = 0; i < v[0].length(); i++)
    {
        s = "";
        for (int j = 0; j < v.size(); j++)
        {
            s += v[j][i];
        }
        if (i == 0)
        {
            f = s;
        }
        else if (i == v[0].length() - 1)
        {
            l = s;
        }
        else
        {
            vInt.push_back(atoi(s.c_str()));
        }
    }

    s = "";
    int first = atoi(f.c_str());
    int last = atoi(l.c_str());
    for (int i = 0; i < vInt.size(); i++)
    {
        s += (char)(((first * vInt[i]) + last) % 257);
    }
    cout << s << endl;
}