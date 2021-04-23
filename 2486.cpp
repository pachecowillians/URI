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
    int ct = 1;
    unordered_map<string, int> m = {
        {"suco de laranja", 120},
        {"morango fresco", 85},
        {"mamao", 85},
        {"goiaba vermelha", 70},
        {"manga", 56},
        {"laranja", 50},
        {"brocolis", 34},
    };

    while (ct != 0)
    {
        cin >> ct;
        cin.ignore();
        if (ct != 0)
        {
            int vit = 0;
            for (int i = 0; i < ct; i++)
            {
                string s;
                int qtde;
                cin >> qtde;
                getline(cin, s);
                s.erase(0, 1);
                vit += m[s] * qtde;
            }
            if (vit < 110)
            {
                cout << "Mais " << 110 - vit << " mg" << endl;
            }
            else if (vit > 130)
            {
                cout << "Menos " << vit - 130 << " mg" << endl;
            }
            else
            {
                cout << vit << " mg" << endl;
            }
        }
    }
}