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

void InverteNumero(int n)
{
    string s = to_string(n);
    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}

void ImprimeEspelho(int c, int f)
{
    for (int i = c; i <= f; i++)
    {
        cout << i;
    }
    for (int i = f; i >= c; i--)
    {
        InverteNumero(i);
    }
    cout << endl;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int inicio, fim;
        cin >> inicio >> fim;
        ImprimeEspelho(inicio, fim);
    }
}