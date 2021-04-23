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
    vector<int> v;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    bool vale = false;
    bool padrao = true;
    if (ct == 2)
    {
        if (v[0] == v[1])
        {
            padrao = false;
        }
    }
    else
    {
        for (int i = 1; i < v.size() - 1; i++)
        {
            if (i == 1)
            {
                if (v[i - 1] > v[i] && v[i] < v[i + 1])
                {
                    vale = true;
                }
                else if (v[i - 1] < v[i] && v[i] > v[i + 1])
                {
                    vale = false;
                }
                else
                {
                    padrao = false;
                }
            }
            else
            {
                if (vale)
                {
                    if (v[i - 1] > v[i] && v[i] < v[i + 1])
                    {
                        vale = true;
                        padrao = false;
                    }
                    else if (v[i - 1] < v[i] && v[i] > v[i + 1])
                    {
                        vale = false;
                    }
                    else
                    {
                        padrao = false;
                    }
                }
                else
                {
                    if (v[i - 1] > v[i] && v[i] < v[i + 1])
                    {
                        vale = true;
                    }
                    else if (v[i - 1] < v[i] && v[i] > v[i + 1])
                    {
                        vale = false;
                        padrao = false;
                    }
                    else
                    {
                        padrao = false;
                    }
                }
            }
        }
    }

    cout << padrao << endl;
}