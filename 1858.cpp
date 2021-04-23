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
    int ct;
    int min = INT_MAX;
    int posMin = -1;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int n;
        cin >> n;
        if (n < min)
        {
            min = n;
            posMin = i + 1;
        }
    }
    cout << posMin << endl;
}