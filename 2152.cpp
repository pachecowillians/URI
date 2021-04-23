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
        int h, m, estado;
        cin >> h >> m >> estado;
        cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m;
        cout << " - A porta ";
        if (estado == 1)
        {
            cout << "abriu!" << endl;
        }
        else
        {
            cout << "fechou!" << endl;
        }
    }
}