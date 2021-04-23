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
        string s;
        cin >> s;
        int n1 = s[0] - '0';
        char c = s[1];
        int n2 = s[2] - '0';
        if (n1 == n2)
        {
            cout << n1 * n2 << endl;
        }
        else
        {
            if (isupper(c))
            {
                cout << n2 - n1 << endl;
            }
            else
            {
                cout << n1 + n2 << endl;
            }
        }
    }
}