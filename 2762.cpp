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
    string s;
    cin >> s;
    s[s.find('.')] = ' ';
    stringstream ss;
    ss << s;
    int n1, n2;
    ss >> n1 >> n2;
    cout << n2 << "." << n1 << endl;
}