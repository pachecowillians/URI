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

int main()
{
    string s;
    int tamLinha = 0;
    while (cin >> s)
    {
        if (s != "<br>" && s != "<hr>")
        {

            if (tamLinha == 0)
            {
                tamLinha += s.length() + 1;
                cout << s;
            }
            else
            {
                if (tamLinha + s.length() >= 80)
                {
                    cout << endl;
                    tamLinha = 0;
                    tamLinha += s.length();
                    cout << s;
                }
                else
                {
                    cout << " ";
                    tamLinha += s.length() + 1;
                    cout << s;
                }
            }
        }
        else
        {
            if (s == "<br>")
            {
                cout << endl;
                tamLinha = 0;
            }
            else
            {
                if (tamLinha > 0)
                {
                    cout << endl;
                    tamLinha = 0;
                }
                cout << "--------------------------------------------------------------------------------" << endl;
                tamLinha = 0;
            }
        }
    }
    if (tamLinha > 0)
    {
        cout << endl;
    }
}