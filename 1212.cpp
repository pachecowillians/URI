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

int CalculaCarry(string s1, string s2)
{
    int i = 0;
    int contCarry = 0;
    bool carry = false;
    while (i < s2.length())
    {
        char c1 = s1[s1.length() - i - 1];
        char c2 = s2[s2.length() - i - 1];
        int soma = (int)(c1 - '0') + (int)(c2 - '0');
        if (carry)
        {
            soma++;
            carry = false;
        }
        if (soma > 9)
        {
            contCarry++;
            carry = true;
        }

        i++;
    }
    while (i < s1.length() && carry)
    {
        carry = false;
        char c1 = s1[s1.length() - i - 1];
        int soma = (int)(c1 - '0') + 1;

        if (soma > 9)
        {
            contCarry++;
            carry = true;
        }

        i++;
    }
    return contCarry;
}

int main()
{
    string s1 = "", s2 = "";
    while (s1 != "0" || s2 != "0")
    {
        cin >> s1 >> s2;
        if (s1 != "0" || s2 != "0")
        {
            if (s2.length() > s1.length())
            {
                string aux = s2;
                s2 = s1;
                s1 = aux;
            }

            int carry = CalculaCarry(s1, s2);
            if (carry == 0)
            {
                cout << "No carry operation." << endl;
            }
            else if (carry == 1)
            {
                cout << "1 carry operation." << endl;
            }
            else
            {
                cout << carry << " carry operations." << endl;
            }
        }
    }
}