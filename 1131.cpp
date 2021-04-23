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
    int continuar = 1;
    int contGrenal = 0;
    int pontosInter = 0;
    int pontosGremio = 0;
    int empates = 0;

    do
    {
        contGrenal++;
        int inter, gremio;
        cin >> inter >> gremio;
        if (inter > gremio)
        {
            pontosInter++;
        }
        else if (gremio > inter)
        {
            pontosGremio++;
        }
        else
        {
            empates++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> continuar;
    } while (continuar == 1);

    cout << contGrenal << " grenais" << endl;
    cout << "Inter:" << pontosInter << endl;
    cout << "Gremio:" << pontosGremio << endl;
    cout << "Empates:" << empates << endl;
    if (pontosInter > pontosGremio)
    {
        cout << "Inter";
    }
    else
    {
        cout << "Gremio";
    }
    cout << " venceu mais" << endl;
}