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
    map<int, string> hash = {
        {1, "0"},
        {2, "6"},
        {3, "12"},
        {4, "90"},
        {5, "360"},
        {6, "2040"},
        {7, "10080"},
        {8, "54810"},
        {9, "290640"},
        {10, "1588356"},
        {11, "8676360"},
        {12, "47977776"},
        {13, "266378112"},
        {14, "1488801600"},
    };
    int ct, n;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        cin >> n;
        cout << hash[n] << endl;
    }
}