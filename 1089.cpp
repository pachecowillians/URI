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
    while (ct != 0)
    {
        cin >> ct;
        if (ct != 0)
        {
            vector<int> v;
            vector<int> vc;
            for (int i = 0; i < ct; i++)
            {
                int n;
                cin >> n;
                v.push_back(n);
                if (i + 1 != ct)
                {
                    vc.push_back(n);
                }
                else
                {
                    vc.insert(vc.begin(), n);
                }
            }
            bool subindo = true;
            int pico = 0;
            if (v[v.size() - 1] > vc[vc.size() - 1])
            {
                subindo = true;
            }
            else
            {
                subindo = false;
            }

            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] > vc[i] && !subindo)
                {
                    pico++;
                }
                else if (v[i] < vc[i] && subindo)
                {
                    pico++;
                }

                if (v[i] > vc[i])
                {
                    subindo = true;
                }
                else
                {
                    subindo = false;
                }
            }
            cout << pico << endl;
        }
    }
}