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
    string chave = "";
    int n = 1;
    while (chave != "0")
    {
        cin >> chave;
        if (chave != "0")
        {
            if (n != 1)
            {
                cout << endl;
            }

            string s;
            cin >> s;
            bool achou = false;
            for (int i = 0; i < s.length() - chave.length() + 1; i++)
            {
                if (s.substr(i, chave.length()) == chave)
                {
                    achou = true;
                }
            }
            cout << "Instancia " << n << endl;
            if (achou)
            {
                cout << "verdadeira" << endl;
            }
            else
            {
                cout << "falsa" << endl;
            }
            n++;
        }
    }
}