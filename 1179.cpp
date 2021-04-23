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
    int n;
    vector<int> vetPares, vetImpares;
    for (int i = 0; i < 15; i++)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            vetPares.push_back(n);
            if (vetPares.size() == 5)
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << "par[" << i << "] = " << vetPares[i] << endl;
                }
                vetPares.clear();
            }
        }
        else
        {
            vetImpares.push_back(n);
            if (vetImpares.size() == 5)
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << "impar[" << i << "] = " << vetImpares[i] << endl;
                }
                vetImpares.clear();
            }
        }
    }
    for (int i = 0; i < vetImpares.size(); i++)
    {
        cout << "impar[" << i << "] = " << vetImpares[i] << endl;
    }
    for (int i = 0; i < vetPares.size(); i++)
    {
        cout << "par[" << i << "] = " << vetPares[i] << endl;
    }
}