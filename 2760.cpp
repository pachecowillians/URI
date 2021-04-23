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
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    cout << s1 << s2 << s3 << endl;
    cout << s2 << s3 << s1 << endl;
    cout << s3 << s1 << s2 << endl;
    cout << s1.substr(0,10) << s2.substr(0,10) << s3.substr(0,10) << endl;
}