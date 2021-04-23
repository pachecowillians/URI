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
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string frase;
    while (frase != ".")
    {
        string s;
        getline(cin, frase);
        if (frase != ".")
        {
            int contAbreviacoes = 0;
            map<string, int> m;
            priority_queue<string> heap;
            vector<string> v(26, "");
            stringstream ss;
            ss << frase;
            while (ss >> s)
            {
                if (!m[s] && s.length() > 2)
                {
                    heap.push(s);
                }
                m[s]++;
            }
            while (!heap.empty())
            {

                string maisEconomica = heap.top();
                heap.pop();
                while (!heap.empty() && heap.top()[0] == maisEconomica[0])
                {
                    if (heap.top().length() * m[heap.top()] - 2 * m[heap.top()] > maisEconomica.length() * m[maisEconomica] - 2 * m[maisEconomica])
                    {
                        maisEconomica = heap.top();
                    }
                    heap.pop();
                }
                v[maisEconomica[0] - 'a'] = maisEconomica;
                contAbreviacoes++;
            }
            ss.clear();
            ss << frase;
            int primeiro = 1;
            while (ss >> s)
            {
                if (primeiro == 1)
                {
                    primeiro = 0;
                }
                else
                {
                    cout << " ";
                }

                int posVet = s[0] - 'a';
                if (v[posVet] == s)
                {
                    cout << s[0] << ".";
                }
                else
                {
                    cout << s;
                }
            }
            cout << endl;
            cout << contAbreviacoes << endl;
            for (int i = 0; i < 26; i++)
            {
                if (v[i] != "")
                {
                    cout << (char)('a' + i) << ". = " << v[i] << endl;
                }
            }
        }
    }
}