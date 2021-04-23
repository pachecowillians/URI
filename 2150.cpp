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
    string vogais;
    while (cin >> vogais)
    {
        string frase;
        cin.ignore();
        getline(cin, frase);
        int contVogais = 0;
        unordered_map<char, bool> mapVogais;
        for (int i = 0; i < vogais.length(); i++)
        {
            mapVogais[vogais[i]] = true;
        }
        for (int i = 0; i < frase.length(); i++)
        {
            if (mapVogais[frase[i]])
            {
                contVogais++;
            }
        }
        cout << contVogais << endl;
    }
}