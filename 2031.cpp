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
    int ct;
    cin >> ct;
    map<pair<string, string>, string> m = {
        {{"ataque", "pedra"}, "ataque"},
        {{"pedra", "ataque"}, "ataque"},
        {{"pedra", "papel"}, "pedra"},
        {{"papel", "pedra"}, "pedra"},
        {{"papel", "ataque"}, "ataque"},
        {{"ataque", "papel"}, "ataque"},
        {{"papel", "papel"}, "ambos_ganham"},
        {{"pedra", "pedra"}, "ambos_perdem"},
        {{"ataque", "ataque"}, "aniquilacao"}};
    for (int i = 0; i < ct; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string s = m[make_pair(s1, s2)];
        if (s == "ambos_ganham")
        {
            cout << "Ambos venceram" << endl;
        }
        else if (s == "ambos_perdem")
        {
            cout << "Sem ganhador" << endl;
        }
        else if (s == "aniquilacao")
        {
            cout << "Aniquilacao mutua" << endl;
        }
        else
        {
            if (s1 == s)
            {
                cout << "Jogador 1 venceu" << endl;
            }
            else
            {
                cout << "Jogador 2 venceu" << endl;
            }
        }
    }
}