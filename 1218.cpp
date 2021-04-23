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
    int n;
    int ct = 1;
    bool primeiro = true;
    while (cin >> n)
    {
        cin.ignore();
        int iguais = 0;
        int f = 0;
        int m = 0;
        string s;
        getline(cin, s);
        pair<int, char> p;
        stringstream ss;
        if (primeiro)
        {
            primeiro = false;
        }
        else
        {
            cout << endl;
        }

        ss << s;
        while (ss >> p.first >> p.second)
        {
            if (p.first == n)
            {
                iguais++;
                if (p.second == 'F')
                {
                    f++;
                }
                else if (p.second == 'M')
                {
                    m++;
                }
            }
        }
        cout << "Caso " << ct << ":" << endl;
        cout << "Pares Iguais: " << iguais << endl;
        cout << "F: " << f << endl;
        cout << "M: " << m << endl;
        ct++;
    }
}