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

void VerificaEncaixa(string v1, string v2)
{
    if (v2.length() > v1.length())
    {
        cout << "nao encaixa" << endl;
    }
    else
    {
        int encaixa = 1;
        for (int i = 1; i <= v2.length() && encaixa == 1; i++)
        {
            if (v1[v1.length() - i] != v2[v2.length() - i])
            {
                encaixa = 0;
            }
        }
        if (encaixa == 1)
        {
            cout << "encaixa" << endl;
        }
        else
        {
            cout << "nao encaixa" << endl;
        }
    }
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string v1, v2;
        cin >> v1 >> v2;
        VerificaEncaixa(v1, v2);
    }
}