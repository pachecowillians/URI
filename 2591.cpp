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
using namespace std;

string Kaaaaaa(string s)
{
    vector<int> v(2, 0);
    int pos = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
        {
            v[pos]++;
        }
        else if (s[i] == 'k')
        {
            pos++;
        }
    }
    string retorno = "k";
    for (int i = 0; i < v[0] * v[1]; i++)
    {
        retorno += "a";
    }
    return retorno;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        cout << Kaaaaaa(s) << endl;
    }
}