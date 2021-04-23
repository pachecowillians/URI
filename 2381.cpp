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
    int ct, pos;
    cin >> ct >> pos;
    vector<string> v;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    make_heap(v.begin(), v.end());
    sort_heap(v.begin(), v.end());
    cout << v[pos - 1] << endl;
}