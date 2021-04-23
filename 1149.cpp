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
    int a, n, soma = 0;
    cin >> a >> n;
    while (n <= 0)
    {
        cin >> n;
    }
    for (int i = 0; i < n; i++)
    {
        soma += a + i;
    }
    cout << soma << endl;
}