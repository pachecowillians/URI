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
#include <regex>
using namespace std;

int main()
{
    string s1, s2;
    regex re("[^0-9.]");

    cin >> s1 >> s2;

    s1 = regex_replace(s1, re, "");
    s2 = regex_replace(s2, re, "");

    cout << "cpf " << s1.substr(0, 11) << endl;

    s1 = s1.substr(11, s1.length() - 11);

    if (s1.find(".") != s1.npos)
    {
        s1 = s1.substr(0, s1.find(".") + 3);
    }

    if (s2.find(".") != s2.npos)
    {
        s2 = s2.substr(0, s2.find(".") + 3);
    }

    double s1f = stod(s1);
    double s2f = stod(s2);

    cout << setprecision(2) << fixed << s1f + s2f << endl;
}