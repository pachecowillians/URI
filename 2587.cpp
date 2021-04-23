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
#include <locale> // std::locale, std::tolower
using namespace std;

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s1, s2, chave;
        pair<int, int> pos;
        pos = make_pair(-1, -1);
        cin >> s1 >> s2 >> chave;
        for (int j = 0; j < chave.length() && pos.second == -1; j++)
        {
            if (chave[j] == '_')
            {
                if (pos.first == -1)
                {
                    pos.first = j;
                }
                else
                {
                    pos.second = j;
                }
            }
        }
        if ((s1[pos.first] == s2[pos.second]) || (s1[pos.second] == s2[pos.first]))
        {
            cout << "Y" << endl;
        }
        else if (s1[pos.first] == s2[pos.first])
        {
            cout << "N" << endl;
        }
        else if (s1[pos.second] == s2[pos.second])
        {
            cout << "N" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
}