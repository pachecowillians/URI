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
    bool escolhaJ1, r, a;
    int n1, n2;
    cin >> escolhaJ1 >> n1 >> n2 >> r >> a;
    bool par = ((n1 + n2) % 2 == 0);
    if (((par && escolhaJ1) || (!par && !escolhaJ1)) && !r)
    {
        cout << "Jogador 1 ganha!" << endl;
    }
    else if (r && !a)
    {
        cout << "Jogador 1 ganha!" << endl;
    }
    else if (!r && a)
    {
        cout << "Jogador 1 ganha!" << endl;
    }
    else
    {
        cout << "Jogador 2 ganha!" << endl;
    }
}