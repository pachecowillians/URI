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
    double somaSaque = 0;
    double somaSaqueCerto = 0;
    double somaBloqueio = 0;
    double somaBloqueioCerto = 0;
    double somaAtaque = 0;
    double somaAtaqueCerto = 0;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        somaSaque += n1;
        somaBloqueio += n2;
        somaAtaque += n3;
        cin >> n1 >> n2 >> n3;
        somaSaqueCerto += n1;
        somaBloqueioCerto += n2;
        somaAtaqueCerto += n3;
    }
    cout << "Pontos de Saque: " << setprecision(2) << fixed << 100 * (somaSaqueCerto / somaSaque) << " %." << endl;
    cout << "Pontos de Bloqueio: " << setprecision(2) << fixed << 100 * (somaBloqueioCerto / somaBloqueio) << " %." << endl;
    cout << "Pontos de Ataque: " << setprecision(2) << fixed << 100 * (somaAtaqueCerto / somaAtaque) << " %." << endl;
}