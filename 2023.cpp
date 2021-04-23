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
    string s;
    string maxString = "";
    while (getline(cin, s))
    {
        if (ConverteMinuscula(s) > ConverteMinuscula(maxString))
        {
            maxString = s;
        }
    }
    cout << maxString << endl;
}