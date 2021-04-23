#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stack> //pilha
#include <queue> //fila
#include <functional>
#include <tr1/functional> //hash
using namespace std;

string ConverteString(string s)
{
    string stringBase;
    stringBase = "";

    stack<string> pilha;

    while (s.length() > 0)
    {
        if (s[0] != '[' && s[0] != ']')
        {
            stringBase += s[0];
            s.erase(0, 1);
        }
        else
        {
            if (s[0] == '[')
            {
                pilha.push(stringBase);
                stringBase = "";
                s.erase(0, 1);
            }
            else if (s[0] == ']')
            {
                while (!pilha.empty())
                {
                    stringBase += pilha.top();
                    pilha.pop();
                }
                s.erase(0, 1);
            }
        }
    }
    while (!pilha.empty())
    {
        stringBase += pilha.top();
        pilha.pop();
    }

    return stringBase;
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        cout << ConverteString(s) << endl;
    }
}