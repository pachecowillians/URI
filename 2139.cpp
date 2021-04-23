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
    vector<int> v = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int m, d;
    while (cin >> m >> d)
    {
        if (m == 12 && d == 25)
        {
            cout << "E natal!" << endl;
        }
        else
        {
            int soma = 0;
            for (int i = m; i < v.size(); i++)
            {
                soma += v[i];
            }
            int dias = soma + 25 - d;
            if (dias == 1)
            {
                cout << "E vespera de natal!" << endl;
            }
            else if (dias < 0)
            {
                cout << "Ja passou!" << endl;
            }
            else
            {
                cout << "Faltam " << dias << " dias para o natal!" << endl;
            }
        }
    }
}