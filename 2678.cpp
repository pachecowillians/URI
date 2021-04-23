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

int TransformaLetra(char c)
{
    string dois = "abc";
    string tres = "def";
    string quatro = "ghi";
    string cinco = "jkl";
    string seis = "mno";
    string sete = "pqrs";
    string oito = "tuv";
    string nove = "wxyz";
    if (dois.find(c) != dois.npos)
    {
        return 2;
    }
    else if (tres.find(c) != tres.npos)
    {
        return 3;
    }
    else if (quatro.find(c) != quatro.npos)
    {
        return 4;
    }
    else if (cinco.find(c) != cinco.npos)
    {
        return 5;
    }
    else if (seis.find(c) != seis.npos)
    {
        return 6;
    }
    else if (sete.find(c) != sete.npos)
    {
        return 7;
    }
    else if (oito.find(c) != oito.npos)
    {
        return 8;
    }
    else if (nove.find(c) != nove.npos)
    {
        return 9;
    }
}

void CalculaLetras(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isalnum(s[i]) || s[i] == '*' || s[i] == '#')
        {
            if (s[i] == '*' || s[i] == '#')
            {
                cout << s[i];
            }
            else if (isdigit(s[i]))
            {
                cout << s[i];
            }
            else
            {
                cout << TransformaLetra(tolower(s[i]));
            }
        }
    }
    cout << endl;
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        CalculaLetras(s);
    }
}