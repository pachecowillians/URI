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
    int soma = 0;
    vector<string> v = {
        "Dasher",
        "Dancer",
        "Prancer",
        "Vixen",
        "Comet",
        "Cupid",
        "Donner",
        "Blitzen",
        "Rudolph"};

    for (int i = 0; i < 9; i++)
    {
        int n;
        cin >> n;
        soma += n;
    }
    int pos = soma % v.size() - 1;
    cout << ((pos != -1) ? v[pos] : v[8]) << endl;
}