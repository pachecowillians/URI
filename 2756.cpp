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
    char c = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7 - i; j++)
        {
            cout << " ";
        }
        cout << (char)(c + i);
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << (char)(c + i) << endl;
        }
        else
        {
            cout << endl;
        }
    }
    for (int i = 3; i >= 0; i--)
    {
        for (int j = 0; j < 7 - i; j++)
        {
            cout << " ";
        }
        cout << (char)(c + i);
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << (char)(c + i) << endl;
        }
        else
        {
            cout << endl;
        }
    }
}