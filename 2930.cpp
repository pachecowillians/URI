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
    int entrega, final;
    cin >> entrega >> final;
    if (entrega > final)
    {
        cout << "Eu odeio a professora!" << endl;
    }
    else
    {
        int dif = final - entrega;
        if (dif >= 3)
        {
            cout << "Muito bem! Apresenta antes do Natal!" << endl;
        }
        else
        {
            cout << "Parece o trabalho do meu filho!" << endl;
            if (entrega + 2 < 24)
            {
                cout << "TCC Apresentado!" << endl;
            }
            else
            {
                cout << "Fail! Entao eh nataaaaal!" << endl;
            }
        }
    }
}