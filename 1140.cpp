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

int main()
{
    string s = "";
    while (s != "*")
    {
        getline(cin, s);
        if (s != "*")
        {
            stringstream ss;
            ss << s;
            char c = '_';
            bool pode = true;
            while (ss >> s && pode)
            {
                if (c == '_')
                {
                    c = tolower(s[0]);
                }
                else if (tolower(s[0]) != c)
                {
                    pode = false;
                }
            }
            if (pode)
            {
                cout << "Y" << endl;
            }
            else
            {
                cout << "N" << endl;
            }
        }
    }
}