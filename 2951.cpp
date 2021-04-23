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
    int runas, amizadeNecessaria;
    cin >> runas >> amizadeNecessaria;
    unordered_map<char, int> mapAmizade;
    for (int i = 0; i < runas; i++)
    {
        char c;
        int valor;
        cin >> c >> valor;
        mapAmizade[c] = valor;
    }
    int ct, soma = 0;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        char c;
        cin >> c;
        soma += mapAmizade[c];
    }
    cout << soma << endl;
    if (soma >= amizadeNecessaria)
    {
        cout << "You shall pass!" << endl;
    }
    else
    {
        cout << "My precioooous" << endl;
    }
}