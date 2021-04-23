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
using namespace std;

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int n;
        map<string, int> m;
        vector<string> v;
        v.push_back("_");
        cin >> n;
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            string p, mag;
            cin >> p >> mag;
            if (mag == "chirrin")
            {
                if (m[p] == 0)
                {
                    k++;
                    m[p] = k;
                    v.push_back(p);
                }
            }
            else if (mag == "chirrion")
            {
                if (m[p] != 0)
                {
                    v[m[p]] = "_";
                    m[p] = 0;
                }
            }
        }
        make_heap(v.begin(), v.end());
        sort_heap(v.begin(), v.end());
        cout << "TOTAL" << endl;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] != "_")
            {
                cout << v[j] << endl;
            }
        }
    }
}