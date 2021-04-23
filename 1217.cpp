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
    float consumoMedio = 0;
    float media = 0;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        float n;
        string s;
        cin >> n;
        cin.ignore();
        getline(cin, s);
        int cont = 0;
        stringstream ss;
        ss << s;
        while (ss >> s)
        {
            cont++;
            consumoMedio++;
        }
        media += n;
        cout << "day " << i + 1 << ": " << cont << " kg" << endl;
    }
    cout << setprecision(2) << fixed << consumoMedio / (float)ct << " kg by day" << endl;
    cout << setprecision(2) << fixed << "R$ " << media / (float)ct << " by day" << endl;
}