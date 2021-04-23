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
#include <bits/stdc++.h>
using namespace std;

struct ordenaString
{
    bool operator()(const string s1, const string s2)
    {
        return s1 > s2;
    }
};

int main()
{
    int ct;
    while (cin >> ct)
    {
        priority_queue<string, vector<string>, ordenaString> heap;
        for (int i = 0; i < ct; i++)
        {
            string n;
            cin >> n;
            heap.push(n);
        }
        while (!heap.empty())
        {
            cout << heap.top() << endl;
            heap.pop();
        }
    }
}