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
#include <set>
#include <algorithm>
#include <stdio.h>
using namespace std;

string CalculaMaiorString(string s1, string s2)
{
    string maior = "";

    if ((s1 == "tesoura" && s2 == "papel") || (s1 == "papel" && s2 == "tesoura"))
    {
        maior = "tesoura";
    }
    else if ((s1 == "pedra" && s2 == "papel") || (s1 == "papel" && s2 == "pedra"))
    {
        maior = "papel";
    }
    else if ((s1 == "pedra" && s2 == "lagarto") || (s1 == "lagarto" && s2 == "pedra"))
    {
        maior = "pedra";
    }
    else if ((s1 == "spock" && s2 == "lagarto") || (s1 == "lagarto" && s2 == "spock"))
    {
        maior = "lagarto";
    }
    else if ((s1 == "spock" && s2 == "tesoura") || (s1 == "tesoura" && s2 == "spock"))
    {
        maior = "spock";
    }
    else if ((s1 == "lagarto" && s2 == "tesoura") || (s1 == "tesoura" && s2 == "lagarto"))
    {
        maior = "tesoura";
    }
    else if ((s1 == "lagarto" && s2 == "papel") || (s1 == "papel" && s2 == "lagarto"))
    {
        maior = "lagarto";
    }
    else if ((s1 == "spock" && s2 == "papel") || (s1 == "papel" && s2 == "spock"))
    {
        maior = "papel";
    }
    else if ((s1 == "spock" && s2 == "pedra") || (s1 == "pedra" && s2 == "spock"))
    {
        maior = "spock";
    }
    else if ((s1 == "tesoura" && s2 == "pedra") || (s1 == "pedra" && s2 == "tesoura"))
    {
        maior = "pedra";
    }

    return maior;
}

string ConverteMinuscula(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

int main()
{
    int ct;
    cin >> ct;

    for (int i = 0; i < ct; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << "Caso #" << i + 1 << ": ";
        s1 = ConverteMinuscula(s1);
        s2 = ConverteMinuscula(s2);
        if (s1 == s2)
        {
            cout << "De novo!" << endl;
        }
        else
        {
            string m = CalculaMaiorString(s1, s2);
            if (m == s1)
            {
                cout << "Bazinga!" << endl;
            }
            else
            {
                cout << "Raj trapaceou!" << endl;
            }
        }
    }
}