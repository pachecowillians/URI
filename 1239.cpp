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
#include <locale> // std::locale, std::tolower
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        bool abertoSublinhado = false;
        bool abertoNegrito = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '_')
            {
                if (!abertoSublinhado)
                {
                    s.replace(i, 1, "<i>");
                    abertoSublinhado = true;
                }
                else
                {
                    s.replace(i, 1, "</i>");
                    abertoSublinhado = false;
                }
            }
            else if (s[i] == '*')
            {
                if (!abertoNegrito)
                {
                    s.replace(i, 1, "<b>");
                    abertoNegrito = true;
                }
                else
                {
                    s.replace(i, 1, "</b>");
                    abertoNegrito = false;
                }
            }
        }
        cout << s << endl;
    }
}