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

void CalculaString(string s, int posDeslocadas)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] - posDeslocadas < 'A')
        {
            int soma = 'A' - (s[i] - posDeslocadas) - 1;
            s[i] = 'Z';
            s[i] -= soma;
        }
        else
        {
            s[i] -= posDeslocadas;
        }
    }
    cout << s << endl;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        int posDeslocadas;
        cin >> s >> posDeslocadas;
        CalculaString(s, posDeslocadas);
    }
}