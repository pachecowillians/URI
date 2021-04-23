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

string RemoveLetras(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            s[i] = ' ';
        }
    }
    return s;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        int soma = 0;
        s = RemoveLetras(s);
        stringstream ss;
        ss << s;
        while (ss >> s)
        {
            soma += stoi(s);
        }
        cout << soma << endl;
    }
}