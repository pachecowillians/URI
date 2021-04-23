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
    int xOrigem, yOrigem, xDestino, yDestino, vel, r1, r2;
    while (cin >> xOrigem >> yOrigem >> xDestino >> yDestino >> vel >> r1 >> r2)
    {
        double distancia = sqrt(pow(xDestino - xOrigem, 2) + pow(yDestino - yOrigem, 2));
        if (r1 + r2 >= distancia + 1.5 * vel)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
}