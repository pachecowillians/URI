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
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "E" << endl;
    }
    else if (n >= 1 && n <= 35)
    {
        cout << "D" << endl;
    }
    else if (n >= 36 && n <= 60)
    {
        cout << "C" << endl;
    }
    else if (n >= 61 && n <= 85)
    {
        cout << "B" << endl;
    }
    else if (n >= 86 && n <= 100)
    {
        cout << "A" << endl;
    }
}