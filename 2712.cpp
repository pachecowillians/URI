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
    unordered_map<int, string> m = {
        {1, "MONDAY"},
        {2, "MONDAY"},
        {3, "TUESDAY"},
        {4, "TUESDAY"},
        {5, "WEDNESDAY"},
        {6, "WEDNESDAY"},
        {7, "THURSDAY"},
        {8, "THURSDAY"},
        {9, "FRIDAY"},
        {0, "FRIDAY"},
    };
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        if (s.length() != 8)
        {
            cout << "FAILURE" << endl;
        }
        else if (s.find('-') == s.npos)
        {
            cout << "FAILURE" << endl;
        }
        else
        {
            bool pode = true;
            for (int j = 0; j < s.length() && pode; j++)
            {
                if (j < 3 && (!isalpha(s[j]) || !isupper(s[j])))
                {
                    pode = false;
                }
                else if (j > 3 && !isdigit(s[j]))
                {
                    pode = false;
                }
            }
            if (!pode)
            {
                cout << "FAILURE" << endl;
            }
            else
            {
                cout << m[s[s.length() - 1] - '0'] << endl;
            }
        }
    }
}