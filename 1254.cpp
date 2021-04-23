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
#include <stdio.h>
#include <stdlib.h>
using namespace std;

string ConverteMinuscula(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

void Substitui(string palavra, string n, string s)
{
    char p = palavra[0];
    bool resistente = false;
    bool tagAberta = false;
    for (int i = 0; i < s.length() && !resistente; i++)
    {
        if (isalpha(s[i]))
        {
            if (tagAberta && tolower(s[i]) == tolower(p) && (i - s.length() - 1) > palavra.length())
            {
                string c = s.substr(i, palavra.length());
                if (ConverteMinuscula(c) == ConverteMinuscula(palavra))
                {
                    s.replace(i, palavra.length(), n);
                }
            }
        }
        else if (s[i] == '<')
        {
            tagAberta = true;
        }
        else if (s[i] == '>')
        {
            tagAberta = false;
        }
    }
    cout << s << endl;
}

int main()
{
    string palavra;
    while (cin >> palavra)
    {
        string n;
        string s;
        cin >> n;
        cin.ignore();
        getline(cin, s);
        Substitui(palavra, n, s);
    }
}