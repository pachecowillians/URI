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
    string s;
    while (getline(cin, s))
    {
        vector<pair<char, int>> vetArvores;
        cout << s << endl;
        bool lendoComando = false;
        bool aguardandoRaiz = false;
        bool aguardandoGalhos = false;
        bool aguardandoLetra = false;

        string comando;
        for (int i = 0; i < s.length(); i++)
        {
            if ((int)s[i] == 92)
            {
                lendoComando = true;
            }
            else if (lendoComando && s[i] != '{')
            {
                comando += s[i];
            }
            else if (s[i] == '{')
            {
                lendoComando = false;
                cout << comando << endl;
                if (comando == "pstree")
                {
                    aguardandoRaiz = true;
                    comando.clear();
                }
                else if (comando == "Tcircle")
                {
                    aguardandoLetra = true;
                }
            }
            else if (s[i] == '}')
            {
                if (aguardandoLetra)
                {
                    vetArvores.push_back(make_pair(s[i - 1], 0));
                    aguardandoLetra = false;
                }
                else if (aguardandoRaiz)
                {
                    aguardandoRaiz = false;
                    aguardandoGalhos = true;
                }
            }
        }
    }
}