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
    cin.ignore();
    for (int i = 0; i < ct; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss;
        ss << s;
        while (ss >> s)
        {
            cout << s[0];
        }
        cout << endl;
    }
}