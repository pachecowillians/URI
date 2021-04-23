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
#include <bits/stdc++.h>
using namespace std;

void CalculaLeds(string s)
{
    int somaLeds = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c == '0')
        {
            somaLeds += 6;
        }
        else if (c == '1')
        {
            somaLeds += 2;
        }
        if (c == '2')
        {
            somaLeds += 5;
        }
        if (c == '3')
        {
            somaLeds += 5;
        }
        if (c == '4')
        {
            somaLeds += 4;
        }
        if (c == '5')
        {
            somaLeds += 5;
        }
        if (c == '6')
        {
            somaLeds += 6;
        }
        if (c == '7')
        {
            somaLeds += 3;
        }
        if (c == '8')
        {
            somaLeds += 7;
        }
        if (c == '9')
        {
            somaLeds += 6;
        }
    }
    cout << somaLeds << " leds" << endl;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        CalculaLeds(s);
    }
}