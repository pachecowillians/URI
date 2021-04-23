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
    int inicio, quantidade;
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int soma = 0;
        cin >> inicio >> quantidade;
        if (inicio % 2 == 0)
        {
            inicio++;
        }
        int k = 0;
        int j = inicio;
        while (k < quantidade)
        {
            k++;
            soma += j;
            j += 2;
        }

        cout << soma << endl;
    }
}