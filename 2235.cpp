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
    int a, b, c;
    cin >> a >> b >> c;

    bool pode = false;

    if (a == 0 or b == 0 or c == 0)
    {
        pode = true;
    }
    else if (a + b == c or a + c == b or c + b == a)
    {
        pode = true;
    }
    else if (a == b or a == c or b == c)
    {
        pode = true;
    }

    if (pode)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
}