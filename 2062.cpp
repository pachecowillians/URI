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
using namespace std;

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        if (s.length() == 3 && s.substr(0, 2) == "OB")
        {
            cout << "OBI";
        }
        else if (s.length() == 3 && s.substr(0, 2) == "UR")
        {
            cout << "URI";
        }
        else
        {
            cout << s;
        }
        if (i + 1 < ct)
        {
            cout << " ";
        }
    }
    cout << endl;
}