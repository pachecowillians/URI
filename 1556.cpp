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

map<string, bool> mapSubs;

void GeraPalavras(string s)
{
    if (s.length() > 0)
    {
        if (mapSubs.find(s) != mapSubs.end())
            return;
        if (mapSubs.find(s) == mapSubs.end())
        {
            mapSubs[s] = true;
        }

        string aux;
        if (s.length() == 1)
        {
            mapSubs[s] = true;
            return;
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                aux = s;
                aux.erase(i, 1);
                GeraPalavras(aux);
            }
            return;
        }
    }
}

int main()
{
    string s;
    while (cin >> s)
    {
        mapSubs.clear();
        GeraPalavras(s);
        map<string, bool>::iterator it;
        for (it = mapSubs.begin(); it != mapSubs.end(); it++)
        {
            cout << it->first << endl;
        }
        cout << endl;
    }
}