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
    while (cin >> ct)
    {
        double somaCima = 0;
        double somaBaixo = 0;
        for (int i = 0; i < ct; i++)
        {
            int n, c;
            cin >> n >> c;
            somaCima += (n * c);
            somaBaixo += c;
        }
        cout << setprecision(4) << fixed << somaCima / (somaBaixo * 100) << endl;
    }
}