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

int RetornaValorSoma(string s1, string s2)
{
    int soma = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s2[i] >= s1[i])
        {
            soma += s2[i] - s1[i];
        }
        else
        {
            soma += (('z' - s1[i]) + (s2[i] - 'a' + 1));
        }
    }
    return soma;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << RetornaValorSoma(s1, s2) << endl;
    }
}