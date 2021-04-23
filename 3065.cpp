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

vector<char> RetiraOperadores(string *s)
{
    vector<char> v;
    for (int i = 0; i < (*s).length(); i++)
    {
        if ((*s)[i] == '+' || (*s)[i] == '-')
        {
            v.push_back((*s)[i]);
            (*s)[i] = ' ';
        }
    }
    return v;
}

int main()
{
    int ct = 1;
    int it = 1;
    while (ct != 0)
    {
        cin >> ct;
        if (ct != 0)
        {
            string s;
            cin >> s;
            vector<char> v = RetiraOperadores(&s);
            stringstream ss;
            ss << s;
            int n;
            ss >> n;
            int soma = n;
            int pos = 0;
            while (ss >> n)
            {
                if (v[pos] == '+')
                {
                    soma += n;
                }
                else
                {
                    soma -= n;
                }
                pos++;
            }
            cout << "Teste " << it << endl;
            cout << soma << endl;
            cout << endl;
            it++;
        }
    }
}