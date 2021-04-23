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
    map<pair<int, int>, bool> m = {
        {{0, 1}, true},
        {{0, 2}, true},
        {{0, 3}, true},
        {{0, 4}, true},
        {{0, 5}, true},
        {{0, 6}, true},
        {{0, 7}, true},
        {{0, 8}, true},
        {{0, 9}, true},
        {{0, 10}, true},
        {{1, 2}, true},
        {{1, 3}, true},
        {{1, 4}, true},
        {{1, 5}, true},
        {{1, 6}, true},
        {{1, 7}, true},
        {{1, 8}, true},
        {{1, 9}, true},
        {{2, 3}, true},
        {{2, 4}, true},
        {{2, 5}, true},
        {{2, 6}, true},
        {{2, 7}, true},
        {{2, 8}, true},
        {{3, 4}, true},
        {{3, 5}, true},
        {{3, 6}, true},
        {{3, 7}, true},
        {{4, 5}, true},
        {{4, 6}, true}
    };
    char c;
    cin >> c;
    double soma;
    double count;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            double n;
            cin >> n;
            if (m[make_pair(i, j)])
            {
                soma += n;
                count++;
            }
        }
    }
    cout << setprecision(1) << fixed << ((c == 'S') ? soma : soma / count) << endl;
}