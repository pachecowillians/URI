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

bool VerificaSenha(string s)
{
    if (s.length() < 6 || s.length() > 32)
    {
        return false;
    }
    else
    {
        bool valida = true;
        bool maiuscula = false, minuscula = false, num = false;
        for (int i = 0; i < s.length() && valida; i++)
        {
            if (!isalnum(s[i]))
            {
                valida = false;
            }
            else
            {
                if (isupper(s[i]))
                {
                    maiuscula = true;
                }
                else if (islower(s[i]))
                {
                    minuscula = true;
                }
                else if (isdigit(s[i]))
                {
                    num = true;
                }
            }
        }
        if (!valida)
        {
            return false;
        }
        else
        {
            if (maiuscula && minuscula && num)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        if (VerificaSenha(s))
        {
            cout << "Senha valida." << endl;
        }
        else
        {
            cout << "Senha invalida." << endl;
        }
    }
}