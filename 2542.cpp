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
    int atributos, c1, c2;
    while (cin >> atributos >> c1 >> c2)
    {
        int mc1[c1][atributos], mc2[c2][atributos];
        for (int i = 0; i < c1; i++)
        {
            for (int j = 0; j < atributos; j++)
            {
                cin >> mc1[i][j];
            }
        }
        for (int i = 0; i < c2; i++)
        {
            for (int j = 0; j < atributos; j++)
            {
                cin >> mc2[i][j];
            }
        }
        cin >> c1 >> c2;
        cin >> atributos;
        if (mc1[c1 - 1][atributos - 1] > mc2[c2 - 1][atributos - 1])
        {
            cout << "Marcos" << endl;
        }
        else if (mc1[c1 - 1][atributos - 1] < mc2[c2 - 1][atributos - 1])
        {
            cout << "Leonardo" << endl;
        }
        else
        {
            cout << "Empate" << endl;
        }
    }
}

//Numero de atributos
//Numero de cartas de cada um
//Percorre o numero de cartas e lê cada atributo de cada um