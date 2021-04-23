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

//raj, sheldon

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

int main()
{
    int ct;
    cin >> ct;

    for (int i = 0; i < ct; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
        {
            cout << "empate" << endl;
        }
        else
        {
            string m = CalculaMaiorString(s1, s2);
            if (m == s1)
            {
                cout << "rajesh" << endl;
            }
            else
            {
                cout << "sheldon" << endl;
            }
        }
    }
}