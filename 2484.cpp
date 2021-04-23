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
    string s;
    while (getline(cin, s))
    {
        int cont = 0;
        while (s.length() >= 1)
        {
            for (int i = 0; i < cont; i++)
            {
                cout << " ";
            }

            for (int i = 0; i < s.length(); i++)
            {
                if (i != 0)
                {
                    cout << " ";
                }

                cout << s[i];
            }
            cout << endl;
            cont++;
            s.erase(s.length() - 1, 1);
        }
        cout << endl;
    }
}