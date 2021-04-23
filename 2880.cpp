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

bool LetraIgual(string s1, string s2)
{
    int igual = false;
    for (int i = 0; i < s1.length() && igual == false; i++)
    {
        if (s1[i] == s2[i])
        {
            igual = true;
        }
    }
    return igual;
}

int main()
{
    string cifra, palavra;
    cin >> cifra >> palavra;
    int maxPos = cifra.length() - palavra.length();
    int contPossibilidades = 0;
    for (int i = 0; i <= maxPos; i++)
    {
        if (!LetraIgual(cifra.substr(i, palavra.length()), palavra))
        {
            contPossibilidades++;
        }
    }
    cout << contPossibilidades << endl;
}