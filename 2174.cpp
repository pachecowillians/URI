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
using namespace std;

int main()
{
    int ct;
    cin >> ct;
    unordered_map<string, bool> m;
    int contCapturados = 0;
    for (int k = 0; k < ct; k++)
    {
        string s;
        cin >> s;
        if (m[s] == false)
        {
            m[s] = true;
            contCapturados++;
        }
    }
    cout << "Falta(m) " << 151 - contCapturados << " pomekon(s)." << endl;
}