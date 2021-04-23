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
#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct digrafo
{
    string dig;
    int frequencia;

    digrafo(string s)
    {
        dig = s;
        frequencia = 1;
    }

    bool operator>(const digrafo d)
    {
        if (d.frequencia == frequencia)
        {
            return dig > d.dig;
        }
        else
        {
            return frequencia < d.frequencia;
        }
    }

    bool operator<(const digrafo d)
    {
        if (d.frequencia == frequencia)
        {
            return dig < d.dig;
        }
        else
        {
            return frequencia > d.frequencia;
        }
    }

} Digrafo;

int main()
{
    int ct = 1;
    while (ct != 0)
    {
        cin >> ct;
        cin.ignore();
        if (ct != 0)
        {
            vector<Digrafo> vetDigrafos;
            unordered_map<string, int> mapDigrafos;
            vetDigrafos.push_back(digrafo("_"));
            int ultimaPosVetor = 1;
            string s;
            float contDigrafos = 0;
            for (int i = 0; i < ct; i++)
            {
                string sIn;
                sIn.clear();
                getline(cin, sIn);
                s += sIn;
            }

            for (int j = 0; j < s.length() - 1; j++)
            {
                string d = s.substr(j, 2);
                if (mapDigrafos[d] == 0)
                {
                    vetDigrafos.push_back(digrafo(d));
                    mapDigrafos[d] = ultimaPosVetor;
                    ultimaPosVetor++;
                }
                else
                {
                    vetDigrafos[mapDigrafos[d]].frequencia++;
                }
                contDigrafos++;
            }

            vetDigrafos.erase(vetDigrafos.begin());
            make_heap(vetDigrafos.begin(), vetDigrafos.end());
            sort_heap(vetDigrafos.begin(), vetDigrafos.end());
            for (int j = 0; j < 5; j++)
            {
                cout << vetDigrafos[j].dig << " " << vetDigrafos[j].frequencia << " " << setprecision(6) << fixed << vetDigrafos[j].frequencia / (double)contDigrafos << endl;
            }
            cout << endl;
        }
    }
}