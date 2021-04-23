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

struct CompareLength
{
    bool operator() (const string &s1, const string &s2)
    {        
        return s1.length() > s2.length();
    }
};
int main()
{
    int ct;
    priority_queue<string, vector<string>, CompareLength> heap;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        heap.push(s);
    }

    for (int i = 0; i < ct; i++)
    {
        cout << heap.top() << endl;
        heap.pop();
    }
}