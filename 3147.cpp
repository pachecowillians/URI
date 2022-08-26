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
    int h, e, a, o, w, x;
    cin >> h >> e >> a >> o >> w >> x;

    if (h + e + a <= o + w && h + e + a + x < o + w)
    {
        cout << "Sauron has returned." << endl;
    }
    else
    {
        cout << "Middle-earth is safe." << endl;
    }

    return 0;
}