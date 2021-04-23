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
    while (cin >> n)
    {
        int cont = 1;
        n = (n % 2 == 0) ? n / 2 : (n + 1) / 2;
        for (int i = 0; i < n; i++)
        {
            for (int j = n - i - 2; j >= 0; j--)
            {
                cout << " ";
            }
            for (int j = 0; j < cont; j++)
            {
                cout << "*";
            }
            cont += 2;
            cout << endl;
        }
        cont = 1;
        for (int i = 0; i < 2; i++)
        {
            for (int j = n - i - 2; j >= 0; j--)
            {
                cout << " ";
            }
            for (int j = 0; j < cont; j++)
            {
                cout << "*";
            }
            cont += 2;
            cout << endl;
        }
        cout << endl;
    }
}