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

string Criptografa(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            if (islower(s[i]))
            {
                if (s[i] + 13 <= 'z')
                {
                    s[i] += 13;
                }
                else
                {
                    s[i] = s[i] + 13 - 'z' + 'a' - 1;
                }
            }
            else
            {
                if (s[i] + 13 <= 'Z')
                {
                    s[i] += 13;
                }
                else
                {
                    s[i] = s[i] + 13 - 'Z' + 'A' - 1;
                }
            }
        }
    }
    return s;
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        cout << Criptografa(s) << endl;
    }
}