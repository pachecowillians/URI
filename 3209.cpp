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
    cin >> ct;

    for (int i = 0; i < ct; i++)
    {
        int k, t;
        cin >> k;
        int tom = 0;
        for (int j = 0; j < k; j++)
        {
            cin >> t;
            tom += t;
        }
        cout << tom - k + 1 << endl;
    }

    return 0;
}