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
    for (int k = 0; k < ct; k++)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (s[0] == '0')
        {
            int i = 0;
            while (s[i] == '0')
            {
                i++;
            }
            char c = s[i];
            s.erase(s.begin() + i);
            s = c + s;
        }

        cout << s << endl;
    }
}