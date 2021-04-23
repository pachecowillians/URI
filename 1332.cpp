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

int ConverteNumero(string s)
{
    if (s.length() == 5)
    {
        return 3;
    }
    else
    {
        int somaCertas = 0;
        string s1 = "one";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == s1[i])
            {
                somaCertas++;
            }
        }
        if (somaCertas >= 2)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string num;
        cin >> num;
        cout << ConverteNumero(num) << endl;
    }
}