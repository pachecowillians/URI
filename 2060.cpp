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
    int c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    for (int i = 0; i < ct; i++)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            c2++;
        }
        if (n % 3 == 0)
        {
            c3++;
        }
        if (n % 4 == 0)
        {
            c4++;
        }
        if (n % 5 == 0)
        {
            c5++;
        }
    }
    cout << c2 << " Multiplo(s) de 2" << endl;
    cout << c3 << " Multiplo(s) de 3" << endl;
    cout << c4 << " Multiplo(s) de 4" << endl;
    cout << c5 << " Multiplo(s) de 5" << endl;
}