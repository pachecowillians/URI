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
    int e, f, c;
    cin >> e >> f >> c;
    int cheios = 0;
    int vazios = e + f;
    int bebidos = 0;
    while (vazios >= c)
    {
        cheios = vazios / c;
        vazios = (vazios % c) + cheios;
        bebidos += cheios;
    }
    cout << bebidos << endl;

    return 0;
}