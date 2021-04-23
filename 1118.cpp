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
    double n;
    double n1 = -1;
    bool esperandoResposta = false;
    while (cin >> n)
    {
        if (esperandoResposta)
        {
            if (n == 1 || n == 2)
            {
                esperandoResposta = false;
            }
            else
            {
                cout << "novo calculo (1-sim 2-nao)" << endl;
            }
        }
        else if (n < 0 || n > 10)
        {
            cout << "nota invalida" << endl;
        }
        else if (n1 == -1)
        {
            n1 = n;
        }
        else
        {
            cout << setprecision(2) << fixed << "media = " << (n + n1) / 2 << endl;
            cout << "novo calculo (1-sim 2-nao)" << endl;
            n1 = -1;
            esperandoResposta = true;
        }
    }
}