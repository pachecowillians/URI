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
    long long int t, ct;
    cin >> t >> ct;
    int soma = 0;
    for (int i = 0; i < ct; i++)
    {
        long long int n;
        cin >> n;
        if (t * n >= 40000000)
        {
            soma++;
        }
    }
    cout << soma << endl;
}