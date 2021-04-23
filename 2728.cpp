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

string TrataString(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '-')
        {
            s[i] = ' ';
        }
    }
    return s;
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        s = TrataString(s);
        stringstream ss;
        string cobol = "cobol";
        int pos = 0;
        ss << s;
        while (ss >> s)
        {
            if (tolower(s[0]) == cobol[pos])
            {
                pos++;
            }
            else if (tolower(s[s.length() - 1]) == cobol[pos])
            {
                pos++;
            }
        }

        if (pos == 5)
        {
            cout << "GRACE HOPPER" << endl;
        }
        else
        {
            cout << "BUG" << endl;
        }
    }
}