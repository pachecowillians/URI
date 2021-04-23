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

string ConverteParaBinario(long long int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {

        s = (char)((n % 2) + '0') + s;
        n = n / 2;
        i++;
    }
    return s;
}

string SomaSemCarry(string s1, string s2)
{
    string s = "";

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[i])
        {
            s += "0";
        }
        else
        {
            s += "1";
        }
    }
    return s;
}

long long int ConverteParaDecimal(string s)
{
    long long int n = 0;
    int p = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        n += (s[i] - '0') * pow(2, p);
        p++;
    }
    return n;
}

int main()
{
    long long int n1, n2;
    while (cin >> n1 >> n2)
    {
        string s1 = ConverteParaBinario(n1);
        string s2 = ConverteParaBinario(n2);
        if (s1.length() > s2.length())
        {
            while (s1.length() > s2.length())
            {
                s2.insert(0, "0");
            }
        }
        if (s1.length() < s2.length())
        {
            while (s1.length() < s2.length())
            {
                s1.insert(0, "0");
            }
        }
        string s = SomaSemCarry(s1, s2);
        cout << ConverteParaDecimal(s) << endl;
    }
}