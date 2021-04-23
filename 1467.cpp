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
    unordered_map<string, char> m = {
        {"000", '*'},
        {"001", 'C'},
        {"010", 'B'},
        {"011", 'A'},
        {"100", 'A'},
        {"101", 'B'},
        {"110", 'C'},
        {"111", '*'},
    };

    char c1, c2, c3;
    while (cin >> c1 >> c2 >> c3)
    {
        string s = "";
        s += c1;
        s += c2;
        s += c3;
        cout << m[s] << endl;
    }
}