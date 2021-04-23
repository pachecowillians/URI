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
    int a, b, c;
    cin >> a >> b >> c;
    cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
    cout << "A = " << setfill(' ') << setw(10) << a
         << ", B = " << setfill(' ') << setw(10) << b
         << ", C = " << setfill(' ') << setw(10) << c << endl;

    cout << "A = " << ((a < 0) ? "-" : "") << right << setfill('0') << ((a < 0) ? setw(9) : setw(10)) << abs(a)
         << ", B = " << ((b < 0) ? "-" : "") << right << setfill('0') << ((b < 0) ? setw(9) : setw(10)) << abs(b)
         << ", C = " << ((c < 0) ? "-" : "") << right << setfill('0') << ((c < 0) ? setw(9) : setw(10)) << abs(c) << endl;

    cout << "A = " << left << setfill(' ') << setw(10) << a
         << ", B = " << setfill(' ') << setw(10) << b
         << ", C = " << setfill(' ') << setw(10) << c << endl;
}