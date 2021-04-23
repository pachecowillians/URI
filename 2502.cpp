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

int main()
{
    int tam, frases;
    while (cin >> tam >> frases)
    {
        string s1, s2;
        unordered_map<char, char> m;
        cin.ignore();
        getline(cin, s1);
        getline(cin, s2);
        for (int i = 0; i < tam; i++)
        {
            char a = tolower(s1[i]);
            char b = tolower(s2[i]);
            m[a] = b;
            m[b] = a;
        }

        for (int i = 0; i < frases; i++)
        {
            string s;
            getline(cin, s);
            for (int j = 0; j < s.length(); j++)
            {
                if (m.count(tolower(s[j])) != 0)
                {
                    if (isupper(s[j]))
                    {
                        cout << (char)toupper(m[tolower(s[j])]);
                    }
                    else
                    {
                        cout << m[s[j]];
                    }
                }
                else
                {
                    cout << s[j];
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}