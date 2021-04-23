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
    int numFig, figCarimbadas, figCompradas;
    cin >> numFig >> figCarimbadas >> figCompradas;
    vector<bool> vetCompradas(numFig, false);
    vector<bool> vetCarimbadas(numFig, false);
    int contCarimbadas = figCarimbadas;
    for (int i = 0; i < figCarimbadas; i++)
    {
        int n;
        cin >> n;
        if (!vetCarimbadas[n])
        {
            vetCarimbadas[n] = true;
        }
    }
    for (int i = 0; i < figCompradas; i++)
    {
        int n;
        cin >> n;
        if (!vetCompradas[n])
        {
            vetCompradas[n] = true;
            if (vetCarimbadas[n])
            {
                contCarimbadas--;
            }
        }
    }
    cout << contCarimbadas << endl;
}