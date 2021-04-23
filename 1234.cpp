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

int main()
{
    string s;
    while (getline(cin, s))
    {
        bool maiuscula = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
            {
                if (maiuscula)
                {
                    cout << (char)toupper(s[i]);
                    maiuscula = false;
                }
                else
                {
                    cout << (char)tolower(s[i]);
                    maiuscula = true;
                }
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}