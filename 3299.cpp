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
    string n;
    cin >> n;
    if (n.find("13") != string::npos)
    {
        cout << n << " es de Mala Suerte" << endl;
    }
    else
    {
        cout << n << " NO es de Mala Suerte" << endl;
    }
    return 0;
}