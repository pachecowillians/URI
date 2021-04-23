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
#include <locale> // std::locale, std::tolower
using namespace std;

string InsereEspacos(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '=')
        {
            s[i] = ' ';
        }
    }
    return s;
}

int main()
{
    string s;
    while (cin >> s)
    {
        s = InsereEspacos(s);
        stringstream ss;
        ss << s;
        string r, l, j;
        ss >> r >> l >> j;
        if (r == "R")
        {
            cout << atoi(j.c_str()) - atoi(l.c_str()) << endl;
        }
        else if (l == "L")
        {
            cout << atoi(j.c_str()) - atoi(r.c_str()) << endl;
        }
        else if (j == "J")
        {
            cout << atoi(l.c_str()) + atoi(r.c_str()) << endl;
        }
    }
}