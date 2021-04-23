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
    int ct, m;
    int soma = 0;
    cin >> ct >> m;
    bool dentro = true;
    for (int i = 0; i < ct; i++)
    {
        int s, e;
        cin >> s >> e;
        soma -= s;
        soma += e;
        if (soma > m)
        {
            dentro = false;
        }
    }
    if (dentro)
    {
        cout << "N" << endl;
    }
    else
    {
        cout << "S" << endl;
    }
}