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
    string chave;
    int ct;
    cin >> chave >> ct;
    cin.ignore();

    string m[26];
    int d = 0;
    m[0] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 1; i < 26; i++)
    {
        string s = m[i - 1];
        char p = s[0];
        s.erase(0, 1);
        s += p;
        m[i] = s;
    }

    for (int i = 0; i < ct; i++)
    {
        string s, n;
        string h;
        string vogais = "aeiou";
        getline(cin, s);
        stringstream ss;
        ss << s;
        s.clear();
        bool primeiro = true;
        int pos = 0;
        while (ss >> n)
        {
            if (primeiro)
            {
                primeiro = false;
            }
            else
            {
                s += " ";
            }

            if (vogais.find(n[0]) == vogais.npos)
            {
                for (int i = 0; i < n.length(); i++)
                {
                    n[i] = m[chave[pos] - 'a'][n[i] - 'a'];
                    pos++;
                    if (pos == chave.length())
                    {
                        pos = 0;
                    }
                    
                }
            }

            s += n;
        }

        cout << s << endl;
    }
}