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
    for (int i = 0; i < ct; i++)
    {
        unsigned long long int p1, p2;
        double tx1, tx2;
        cin >> p1 >> p2 >> tx1 >> tx2;
        int cont = 0;
        while (p1 <= p2 && cont <= 100)
        {
            p1 += p1 * tx1 / 100;
            p2 += p2 * tx2 / 100;
            cont++;
        }
        if (cont == 101)
        {
            cout << "Mais de 1 seculo." << endl;
        }
        else
        {
            cout << cont << " anos." << endl;
        }
    }
}