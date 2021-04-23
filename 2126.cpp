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
    string sub;
    int caso = 1;
    while (cin >> sub)
    {
        string s;
        cin >> s;
        int pos = -1;
        int cont = 0;
        for (int i = 0; i <= s.length() - sub.length(); i++)
        {
            if (s.substr(i, sub.length()) == sub)
            {
                cont++;
                pos = i + 1;
            }
        }
        cout << "Caso #" << caso << ":" << endl;
        if (cont > 0)
        {
            cout << "Qtd.Subsequencias: " << cont << endl;
            cout << "Pos: " << pos << endl;
        }
        else
        {
            cout << "Nao existe subsequencia" << endl;
        }
        cout << endl;
        caso++;
    }
}