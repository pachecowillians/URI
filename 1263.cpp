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
    while (getline(cin, s))
    {
        int contAliteracao = 0;
        stringstream ss;
        ss << s;
        char c = '.';
        int acontecendo = 0;
        while (ss >> s)
        {
            if (c == '.')
            {
                c = tolower(s[0]);
            }
            else if (tolower(s[0]) == c && acontecendo == 0)
            {
                contAliteracao++;
                acontecendo = 1;
            }
            else if (tolower(s[0]) != c)
            {
                acontecendo = 0;
                c = tolower(s[0]);
            }
        }
        cout << contAliteracao << endl;
    }
}