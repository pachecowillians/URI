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

int ConverteCaracter(char c)
{
    string s0 = "akuGQ";
    string s1 = "blvIS";
    string s2 = "cmwEOY";
    string s3 = "dnxFPZ";
    string s4 = "eoyJT";
    string s5 = "fpzDNX";
    string s6 = "gqAKU";
    string s7 = "hrCMW";
    string s8 = "isBLV";
    string s9 = "jtHR";

    if (s0.find(c) != s0.npos)
    {
        return 0;
    }
    else if (s1.find(c) != s1.npos)
    {
        return 1;
    }
    else if (s2.find(c) != s2.npos)
    {
        return 2;
    }
    else if (s3.find(c) != s3.npos)
    {
        return 3;
    }
    else if (s4.find(c) != s4.npos)
    {
        return 4;
    }
    else if (s5.find(c) != s5.npos)
    {
        return 5;
    }
    else if (s6.find(c) != s6.npos)
    {
        return 6;
    }
    else if (s7.find(c) != s7.npos)
    {
        return 7;
    }
    else if (s8.find(c) != s8.npos)
    {
        return 8;
    }
    else if (s9.find(c) != s9.npos)
    {
        return 9;
    }
}

int main()
{
    int ct;
    cin >> ct;
    string lixo;
    getline(cin, lixo);
    for (int i = 0; i < ct; i++)
    {
        string s;
        getline(cin, s);
        int cont = 0;
        for (int j = 0; j < s.length() && cont < 12; j++)
        {
            if (s[j] != ' ')
            {
                cout << ConverteCaracter(s[j]);
                cont++;
            }
        }
        cout << endl;
    }
}