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

int main()
{
    int ct;
    cin >> ct;
    cin.ignore();
    for (int i = 0; i < ct; i++)
    {
        string dieta, cafe, almoco;
        unordered_map<char, int> mapDieta;
        bool cheater = false;
        getline(cin, dieta);
        getline(cin, cafe);
        getline(cin, almoco);
        for (int j = 0; j < dieta.length(); j++)
        {
            mapDieta[dieta[j]] = 1;
        }
        for (int j = 0; j < cafe.length() & !cheater; j++)
        {
            if (mapDieta[cafe[j]] == 1)
            {
                mapDieta[cafe[j]]++;
            }
            else
            {
                cheater = true;
            }
        }
        if (!cheater)
        {
            for (int j = 0; j < almoco.length() & !cheater; j++)
            {
                if (mapDieta[almoco[j]] == 1)
                {
                    mapDieta[almoco[j]]++;
                }
                else
                {
                    cheater = true;
                }
            }
        }

        if (cheater)
        {
            cout << "CHEATER" << endl;
        }
        else
        {
            for (int j = 0; j < 26; j++)
            {
                if (mapDieta[(char)('A' + j)] == 1)
                {
                    cout << (char)('A' + j);
                }
            }
            cout << endl;
        }
    }
}