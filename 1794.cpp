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
    int n, la, lb, sa, sb;
    cin >> n >> la >> lb >> sa >> sb;
    if (n >= la && n >= sa && n <= lb && n <= sb)
    {
        cout << "possivel" << endl;
    }
    else
    {
        cout << "impossivel" << endl;
    }
}