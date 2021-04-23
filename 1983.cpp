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
    float maxNota = -1;
    string maxString = "";
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        float nota;
        cin >> s >> nota;
        if (nota > maxNota)
        {
            maxNota = nota;
            maxString = s;
        }
    }
    if (maxNota < 8)
    {
        cout << "Minimum note not reached" << endl;
    }
    else
    {
        cout << maxString << endl;
    }
}