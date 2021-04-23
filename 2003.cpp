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

string RemoveDoisPontos(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ':')
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
        s = RemoveDoisPontos(s);
        stringstream ss;
        ss << s;
        int h, m;
        ss >> h >> m;
        cout << "Atraso maximo: ";
        if (h + 1 == 8)
        {
            cout << m << endl;
        }
        else if (h + 1 > 8)
        {
            cout << (h - 8) * 60 + m + 60 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}