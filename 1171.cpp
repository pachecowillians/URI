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
    priority_queue<int, vector<int>, greater<int>> pqNum;
    unordered_map<int, int> m;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int n;
        cin >> n;
        if (m.count(n) == 0)
        {
            pqNum.push(n);
        }

        m[n]++;
    }
    while (!pqNum.empty())
    {
        cout << pqNum.top() << " aparece " << m[pqNum.top()] << " vez(es)" << endl;
        pqNum.pop();
    }
}