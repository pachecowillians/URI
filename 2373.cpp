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
    int ct, soma = 0;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int l, c;
        cin >> l >> c;
        if (l > c)
        {
            soma += c;
        }
    }
    cout << soma << endl;
}