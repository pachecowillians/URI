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
        int n;
        vector<int> vet;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int v;
            cin >> v;
            if (v % 2 != 0)
            {
                vet.push_back(v);
            }
        }
        make_heap(vet.begin(), vet.end());
        sort_heap(vet.begin(), vet.end());
        int f, c;
        c = 0;
        f = vet.size() - 1;
        while (c < f)
        {
            if (c != 0)
            {
                cout << " ";
            }

            cout << vet[f] << " " << vet[c];
            c++;
            f--;
        }
        if (vet.size() % 2 != 0)
        {
            if (vet.size() != 1)
            {
                cout << " ";
            }

            cout << vet[(vet.size() - 1) / 2];
        }

        cout << endl;
    }
}