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

int CalculaTamanhoMax(string s1, string s2)
{
    bool achou = false;
    int size = 0;
    for (int i = 0; i < s1.length() && !achou; i++)
    {
        for (int j = 0; j < i + 1 && !achou; j++)
        {
            string subs = s1.substr(j, s1.length() - i);
            if (s2.find(subs) != s2.npos)
            {
                achou = true;
                size = subs.length();
            }
        }
    }
    return size;
}

int main()
{
    string s1;
    while (getline(cin, s1))
    {
        string s2;
        getline(cin, s2);
        int maxSize = 0;
        if (s1.length() < s2.length())
        {
            maxSize = CalculaTamanhoMax(s1, s2);
        }
        else
        {
            maxSize = CalculaTamanhoMax(s2, s1);
        }
        cout << maxSize << endl;
    }
}