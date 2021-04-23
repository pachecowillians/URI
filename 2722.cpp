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

void ConvertePalavras(string nome, string sobrenome)
{
    string s = "";
    while (nome.length() > 0 || sobrenome.length() > 0)
    {
        if (nome.length() > 0)
        {
            if (nome.length() == 1)
            {
                s += nome.substr(0, 1);
                nome.erase(0, 1);
            }
            else
            {
                s += nome.substr(0, 2);
                nome.erase(0, 2);
            }
        }
        if (sobrenome.length() > 0)
        {
            if (sobrenome.length() == 1)
            {
                s += sobrenome.substr(0, 1);
                sobrenome.erase(0, 1);
            }
            else
            {
                s += sobrenome.substr(0, 2);
                sobrenome.erase(0, 2);
            }
        }
    }
    cout << s << endl;
}

int main()
{
    int ct;
    cin >> ct;
    cin.ignore();
    for (int i = 0; i < ct; i++)
    {
        string nome, sobrenome;
        getline(cin, nome);
        getline(cin, sobrenome);
        ConvertePalavras(nome, sobrenome);
    }
}