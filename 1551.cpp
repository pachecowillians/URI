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

int main()
{
    int ct;
    cin >> ct;
    cin.ignore();
    for (int i = 0; i < ct; i++)
    {
        string s;
        unordered_map<char, bool> m;
        int contaLetras = 0;
        getline(cin, s);
        for (int j = 0; j < s.length(); j++)
        {
            if (isalpha(s[j]))
            {
                if (m[s[j]] == false)
                {
                    m[s[j]] = true;
                    contaLetras++;
                }
            }
        }
        if (contaLetras == 26)
        {
            cout << "frase completa" << endl;
        }
        else if (contaLetras >= 13)
        {
            cout << "frase quase completa" << endl;
        }
        else
        {
            cout << "frase mal elaborada" << endl;
        }
    }
}