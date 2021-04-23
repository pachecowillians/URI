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
        int joao = 0, maria = 0;
        for (int j = 0; j < 3; j++)
        {
            int x, d;
            cin >> x >> d;
            joao += x * d;
        }
        for (int j = 0; j < 3; j++)
        {
            int x, d;
            cin >> x >> d;
            maria += x * d;
        }
        if (joao > maria)
        {
            cout << "JOAO" << endl;
        }
        else
        {
            cout << "MARIA" << endl;
        }
    }
}