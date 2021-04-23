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

string InverteString(string s)
{
    string retorno = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        retorno += s[i];
    }
    return retorno;
}

int main()
{
    int ct;
    cin >> ct;
    cin.ignore();
    for (int i = 0; i < ct; i++)
    {
        string s;
        getline(cin, s);
        int j = 0;
        if (s.length() % 2 != 0)
        {
            j++;
        }

        cout << InverteString(s.substr(0, s.length() / 2));
        cout << InverteString(s.substr(s.length() / 2, s.length() / 2 + j));
        cout << endl;
    }
}