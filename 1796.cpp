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
    int cont = 0;
    for (int i = 0; i < ct; i++)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            cont++;
        }
        else
        {
            cont--;
        }
    }
    if (cont > 0)
    {
        cout << "Y" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
}