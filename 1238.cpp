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

string ConcatenaStrings(string s1, string s2)
{
    string retorno = "";
    for (int i = 0; i < s1.length(); i++)
    {
        retorno += s1[i];
        if (i < s2.length())
        {
            retorno += s2[i];
        }
    }
    if (s1.length() < s2.length())
    {
        retorno += s2.substr(s1.length(), s2.length() - s1.length());
    }
    return retorno;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << ConcatenaStrings(s1, s2) << endl;
    }
}