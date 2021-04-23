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
    int n = 1;
    long long int xp = 1;
    while (n != 0 || xp != 0)
    {
        cin >> n >> xp;
        if (n != 0 && xp != 0)
        {
            cout << n * xp << endl;
        }
    }
}