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
#include <bits/stdc++.h>
using namespace std;

string Descodifica(string s)
{
    string r = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (islower(s[i]))
        {
            r += s[i];
        }
    }
    return r;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        cout << Descodifica(s) << endl;
    }
}