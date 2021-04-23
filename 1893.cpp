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
    int a, b;
    cin >> a >> b;

    if (a > b && b >= 3 && b <= 96)
    {
        cout << "minguante" << endl;
    }
    else
    {
        if (b >= 0 && b <= 2)
        {
            cout << "nova" << endl;
        }
        else if (b >= 3 && b <= 96)
        {
            cout << "crescente" << endl;
        }
        else if (b >= 97 && b <= 100)
        {
            cout << "cheia" << endl;
        }
    }
}