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
    cin.ignore();
    for (int i = 0; i < ct; i++)
    {
        int n1, n2;
        string frase, j1, j2, opj1, opj2;
        stringstream ss;
        ss.clear();
        getline(cin, frase);
        ss << frase;
        ss >> j1 >> opj1 >> j2 >> opj2;
        ss.clear();
        getline(cin, frase);
        ss << frase;
        ss >> n1 >> n2;
        if ((n1 + n2) % 2 == 0 && opj1 == "PAR" || (n1 + n2) % 2 != 0 && opj1 == "IMPAR")
        {
            cout << j1 << endl;
        }
        else
        {
            cout << j2 << endl;
        }
    }
}