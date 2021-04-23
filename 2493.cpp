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

typedef struct equacao
{
    int v1, v2, r;
} Equacao;

int main()
{
    int t;
    while (cin >> t)
    {
        string lixo;
        getline(cin, lixo);
        vector<Equacao> v;
        for (int i = 0; i < t; i++)
        {
            string s;
            getline(cin, s);
            s[s.find('=')] = ' ';
            stringstream ss;
            ss << s;
            Equacao eq;
            ss >> eq.v1 >> eq.v2 >> eq.r;
            v.push_back(eq);
        }
        priority_queue<string, vector<string>, greater<string>> vetErrados;
        for (int i = 0; i < t; i++)
        {
            string s;
            int pos;
            char op;
            cin >> s >> pos >> op;
            if (op == '+')
            {
                bool acertou = ((v[pos - 1].v1 + v[pos - 1].v2) == v[pos - 1].r);
                if (!acertou)
                {
                    vetErrados.push(s);
                }
            }
            else if (op == '-')
            {
                bool acertou = ((v[pos - 1].v1 - v[pos - 1].v2) == v[pos - 1].r);
                if (!acertou)
                {
                    vetErrados.push(s);
                }
            }
            else if (op == '*')
            {
                bool acertou = ((v[pos - 1].v1 * v[pos - 1].v2) == v[pos - 1].r);
                if (!acertou)
                {
                    vetErrados.push(s);
                }
            }
            else if (op == 'I')
            {
                int a = v[pos - 1].v1;
                int b = v[pos - 1].v2;
                int c = v[pos - 1].r;
                bool acertou = ((a + b) != c && (a - b) != c && (a * b != c));
                if (!acertou)
                {
                    vetErrados.push(s);
                }
            }
        }
        if (vetErrados.empty())
        {
            cout << "You Shall All Pass!" << endl;
        }
        else
        {
            if (vetErrados.size() == t)
            {
                cout << "None Shall Pass!" << endl;
            }
            else
            {
                bool primeiro = true;
                while (!vetErrados.empty())
                {
                    if (primeiro)
                    {
                        primeiro = false;
                    }
                    else
                    {
                        cout << " ";
                    }

                    cout << vetErrados.top();
                    vetErrados.pop();
                }
                cout << endl;
            }
        }
    }
}