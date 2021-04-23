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

string RemoveEspacos(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '/')
        {
            s[i] = ' ';
        }
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    s = RemoveEspacos(s);
    stringstream ss;
    ss << s;
    string d, m, a;
    ss >> d >> m >> a;
    cout << m << "/" << d << "/" << a << endl;
    cout << a << "/" << m << "/" << d << endl;
    cout << d << "-" << m << "-" << a << endl;
}