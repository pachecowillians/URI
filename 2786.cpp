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
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, c;
    cin >> l >> c;
    int tipo1 = l * c + (l - 1) * (c - 1);
    int tipo2 = ((l - 1) + (c - 1)) * 2;
    cout << tipo1 << endl;
    cout << tipo2 << endl;
}