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

string ConverteMinuscula(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            if (isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
        }
    }
    return s;
}

int main()
{
    int ct;
    cin >> ct;
    cin.ignore();
    for (int i = 0; i < ct; i++)
    {
        string s;
        getline(cin, s);
        string palavraOriginal = "";
        for (int i = 0; i < s.length(); i++)

        {
            if (isalpha(s[i]))
            {
                palavraOriginal += s[i];
            }
            else
            {

                if (palavraOriginal.length() == 10)
                {
                    string x;
                    for (int j = 1; j < 9; j++)
                        x += tolower(palavraOriginal[j]);
                    if (x == "oulupukk")
                        cout << "Joulupukki";
                    else
                        cout << palavraOriginal;
                }
                else
                {
                    cout << palavraOriginal;
                }
                palavraOriginal.clear();

                if (s[i] == ' ')
                    cout << " ";
                if (s[i] == '.')
                    cout << ".";
            }
        }

        if (palavraOriginal.length() > 0)
        {
            if (palavraOriginal.length() == 10)
            {
                string x;
                for (int j = 1; j < 9; j++)
                    x += tolower(palavraOriginal[j]);
                if (x == "oulupukk")
                    cout << "Joulupukki";
                else
                    cout << palavraOriginal;
            }
            else
            {
                cout << palavraOriginal;
            }
        }

        palavraOriginal.clear();
        cout << endl;
    }
}