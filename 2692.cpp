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

int main()
{
    int letras, frases;
    unordered_map<char, char> mapLetras;
    cin >> letras >> frases;
    string s;
    getline(cin, s);
    string x, y;
    char a, b;
    for (int i = 0; i < letras; i++)
    {
        cin >> x >> y;
        a = x[0];
        b = y[0];
        mapLetras[a] = b;
        mapLetras[b] = a;
    }
    getline(cin, s);
    for (int i = 0; i < frases; i++)
    {
        string s;
        getline(cin, s);
        for (int j = 0; j < s.length(); j++)
        {
            if (mapLetras.count(s[j]) == 1)
            {
                cout << mapLetras[s[j]];
            }
            else
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}