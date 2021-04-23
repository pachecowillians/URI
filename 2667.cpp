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

int CalculaResposta(string s)
{
    int retorno = 0;
    int i;

    for (i = 0; i < s.length(); ++i)
    {
        retorno += s[i] - '0';
    }
    return retorno;
}
int main()
{
    string s;
    cin >> s;
    cout << CalculaResposta(s)%3 << endl;
}