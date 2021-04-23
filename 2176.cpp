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

int DigitoAMais(string s)
{
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            c++;
        }
    }
    return !(c % 2 == 0);
}

int main()
{
    string s;
    cin >> s;
    cout << s << DigitoAMais(s) << endl;
}